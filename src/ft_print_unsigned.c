/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:32:00 by vmiseiki          #+#    #+#             */
/*   Updated: 2021/07/27 11:45:22 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_unsigned(unsigned int value)
{
	char	*nbr;
	size_t	size;

	if (value >= 10)
	{
		nbr = ft_itoa(value / 10);
		size = ft_putstr(nbr);
		free (nbr);
		return (size + ft_putchar(value % 10 + '0'));
	}	
	else
		return (ft_putchar(value + '0'));
}
