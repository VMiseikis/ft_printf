/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:35:51 by vmiseiki          #+#    #+#             */
/*   Updated: 2021/07/27 11:43:47 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_hex(const char *format, unsigned int value)
{
	int		i;
	char	res[9];

	i = 0;
	if (value != 0)
	{
		ft_convert_base(value, 16, res);
		while (res[i] != '\0')
		{
			if (res[i] >= '0' && res[i] <= '9')
				ft_putchar(res[i]);
			else
			{
				if (*format == 'X')
					ft_putchar(res[i] - 32);
				else
					ft_putchar(res[i]);
			}
			i++;
		}
	}
	else
		i += ft_putstr("0");
	return (i);
}

void	ft_convert_base(unsigned long value, int base, char *res)
{
	int				i;
	unsigned long	temp;

	i = 0;
	while (value > 0)
	{
		temp = value % base;
		if (temp <= 9)
			res[i] = temp + '0';
		else
			res[i] = temp - 10 + 'a';
		value = value / base;
		i++;
	}
	res[i] = '\0';
	ft_rev_str(res);
}

void	ft_rev_str(char *str)
{
	size_t	i;
	size_t	str_len;
	char	temp;

	i = 0;
	str_len = ft_strlen(str);
	while (i < (str_len / 2))
	{
		temp = str[i];
		str[i] = str[str_len - i - 1];
		str[str_len - i - 1] = temp;
		i++;
	}
}
