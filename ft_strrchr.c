/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:47:33 by emgumus           #+#    #+#             */
/*   Updated: 2024/10/28 21:47:33 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = NULL;
	while (*s)
	{
		if (*s == (char)c)
			end = s;
		s++;
	}
	if ((char )c == '\0')
		return ((char *)s);
	return ((char *)end);
}
