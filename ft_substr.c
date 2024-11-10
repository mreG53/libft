/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <emgumus@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:38:39 by emgumus           #+#    #+#             */
/*   Updated: 2024/11/10 20:30:45 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*uc_str;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	uc_str = malloc(sizeof(char) * (len + 1));
	if (!uc_str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		uc_str[i] = s[start + i];
		i++;
	}
	uc_str[i] = '\0';
	return (uc_str);
}
