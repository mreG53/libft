/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:32:48 by emgumus           #+#    #+#             */
/*   Updated: 2024/11/03 15:32:48 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		size;
	t_list	*l_list;

	size = ft_lstsize(lst) - 1;
	if (!lst)
		return (NULL);
	while (size--)
		lst = lst-> next;
	l_list = lst;
	return (l_list);
}
