/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:24:46 by emgumus           #+#    #+#             */
/*   Updated: 2024/10/28 20:24:46 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ltr;

	i = 0;
	ltr = (unsigned char)c;
	while (s[i] && s[i] != ltr)
		i++;
	if (s[i] == ltr)
		return ((char *)&s[i]);
	return (NULL);
}
