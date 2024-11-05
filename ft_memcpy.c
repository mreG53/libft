/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:52:02 by emgumus           #+#    #+#             */
/*   Updated: 2024/10/29 17:52:02 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	if (!dst && !src)
		return (dst);
	uc_src = (unsigned char *)src;
	uc_dst = (unsigned char *)dst;
	while (n--)
		*uc_dst++ = *uc_src++;
	return (dst);
}
