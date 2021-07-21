/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:28:00 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/19 14:04:57 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void*s, int c, size_t n)
{
	int	i;
	unsigned char *src;

	src = (unsigned char *)s;
	i = 0;
	while (i < n && src[i])
	{
		if (src[i] == c)
			return ((char *)src + i);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char str[16] = "This is a test.";
	int c = '.';
	printf ("%s\n", memchr(str, c, 14));
	printf ("%s\n", memchr(str, c, 14));
}
