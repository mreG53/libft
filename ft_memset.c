/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:00:22 by emgumus           #+#    #+#             */
/*   Updated: 2024/10/29 16:00:22 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uc;

	uc = (unsigned char *)b;
	while (len > 0)
	{
		*uc++ = (unsigned char)c;
		len--;
	}
	return (b);
}
