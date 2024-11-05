/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:45:09 by emgumus           #+#    #+#             */
/*   Updated: 2024/10/29 19:45:09 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	uc_src = (unsigned char *)src;
	uc_dst = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (uc_dst > uc_src)
	{
		while (len--)
			uc_dst[len] = uc_src[len];
	}
	else
	{
		while (len--)
		{
			*uc_dst++ = *uc_src++;
		}
	}
	return (dst);
}
