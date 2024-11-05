/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:33:49 by emgumus           #+#    #+#             */
/*   Updated: 2024/10/31 18:55:54 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wc(const char *str, char spr)
{
	int	t;
	int	c;

	c = 0;
	t = 0;
	while (*str)
	{
		if (*str != spr && t == 0)
		{
			t = 1;
			c++;
		}
		else if (*str == spr)
			t = 0;
		str++;
	}
	return (c);
}

static char	*ft_fw(const char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	ft_memcpy(word, str, i);
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **str_arr)
{
	int	i;

	i = 0;
	while (str_arr[i])
	{
		free(str_arr[i]);
		i++;
	}
	free(str_arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	char	**s_index;

	if (!s)
		return (NULL);
	str_arr = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1));
	if (!str_arr)
		return (NULL);
	s_index = str_arr;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			*str_arr = ft_fw(s, c);
			if (!*str_arr)
				return (ft_free(s_index));
			str_arr++;
		}
		while (*s && *s != c)
			s++;
	}
	*str_arr = NULL;
	return (s_index);
}
