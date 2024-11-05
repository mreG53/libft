/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:23:48 by emgumus           #+#    #+#             */
/*   Updated: 2024/10/29 20:23:48 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*mb;
	size_t			i;

	uc = (unsigned char)c;
	mb = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (mb[i] == uc)
			return ((void *)&mb[i]);
		i++;
	}
	return (NULL);
}
