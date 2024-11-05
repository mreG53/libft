/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:17:55 by emgumus           #+#    #+#             */
/*   Updated: 2024/11/05 23:17:55 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*t_lst;

	t_lst = lst;
	if (!f)
		return ;
	while (t_lst)
	{
		f(t_lst->content);
		t_lst = t_lst->next;
	}
}
