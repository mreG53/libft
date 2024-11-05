/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <<emgumus@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:56:28 by emgumus           #+#    #+#             */
/*   Updated: 2024/10/31 18:56:28 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

static char	*ft_preset(int len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (0);
	else
	{
		tmp[0] = '0';
		return (tmp);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	long	nbr;

	nbr = n;
	len = ft_int_len(nbr);
	str = ft_preset(len);
	if (!str)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		str[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}
