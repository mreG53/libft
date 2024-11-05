/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:12:50 by emgumus           #+#    #+#             */
/*   Updated: 2024/10/30 23:18:45 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*t_str;

	t_str = (char *)malloc(sizeof(char)
			* ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!t_str)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i])
	{
		t_str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		t_str[j] = s2[i];
		i++;
		j++;
	}
	t_str[j] = '\0';
	return (t_str);
}
