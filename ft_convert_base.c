/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:34:20 by vmiseiki          #+#    #+#             */
/*   Updated: 2021/08/10 13:14:49 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_base(unsigned long value, int base, char *res)
{
	int				i;
	unsigned long	temp;

	i = 0;
	while (value > 0)
	{
		temp = value % base;
		if (temp >= 0 && temp <= 9)
			res[i] = temp + '0';
		else
			res[i] = temp - 10 + 'a';
		value = value / base;
		i++;
	}
	res[i] = '\0';
	ft_rev_str(res);
}
