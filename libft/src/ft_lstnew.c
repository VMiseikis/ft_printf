/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:04:11 by vmiseiki          #+#    #+#             */
/*   Updated: 2023/02/01 19:01:52 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*elem;

	elem = (struct s_list *)malloc(sizeof(struct s_list));
	if (!elem)
		return (NULL);
	elem -> content = content;
	elem -> next = NULL;
	return (elem);
}
