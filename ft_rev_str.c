/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:33:17 by vmiseiki          #+#    #+#             */
/*   Updated: 2021/07/27 11:47:31 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
