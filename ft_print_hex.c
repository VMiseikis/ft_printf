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
