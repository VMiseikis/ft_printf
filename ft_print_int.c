/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:30:57 by vmiseiki          #+#    #+#             */
/*   Updated: 2021/07/27 11:44:26 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_int(int value)
{
	char	*nbr;
	size_t	size;

	nbr = ft_itoa(value);
	size = ft_putstr(nbr);
	free(nbr);
	return (size);
}
