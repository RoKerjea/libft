/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:28:00 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 20:11:53 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void*s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*src;
	unsigned char	needle;

	src = (unsigned char *)s;
	needle = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == needle)
			return ((void *)&src[i]);
		i++;
	}
	return (0);
}
