/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgumus <emgumus@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:59:19 by emgumus           #+#    #+#             */
/*   Updated: 2024/11/10 20:35:55 by emgumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!f)
		return (0);
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
