/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 13:32:00 by vmiseiki          #+#    #+#             */
/*   Updated: 2023/02/01 19:01:38 by vmiseiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ls;

	while (*lst)
	{
		ls = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = ls;
	}
	lst = NULL;
}
