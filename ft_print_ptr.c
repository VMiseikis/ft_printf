/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:36:39 by vmiseiki          #+#    #+#             */
/*   Updated: 2021/08/10 13:14:31 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_ptr(unsigned long value)
{
	size_t	i;
	char	res[50];

	i = 0;
	if (!value)
		return (write(1, "0x0", 3));
	if (value != 0)
	{
		ft_putstr("0x");
		ft_convert_base(value, 16, res);
		while (res[i] != '\0')
		{
			ft_putchar(res[i]);
			i++;
		}		
		i = i + 2;
	}
	else
		i += ft_putstr("0x0");
	return (i);
}
