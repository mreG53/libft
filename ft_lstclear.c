/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:00:33 by emgumus           #+#    #+#             */
/*   Updated: 2024/11/05 23:00:33 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t_lst;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		t_lst = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = t_lst;
	}
	*lst = NULL;
}
