/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchrmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:32:15 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 19:49:21 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memchr(const void*s, int c, size_t n)
{
	int				i;
	unsigned char	needle;
	unsigned char	*src;

	needle = (unsigned char)c;
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == needle)
			return ((void *)&src[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char s[] = {0, 1, 2, 3, 4, 5};
	//char str[16] = "This is a test.";
	int c = '0';
	printf ("%s\n", memchr(s, 2 + 256, 3));
	printf ("%s\n",ft_memchr(s, 2 + 256, 3));
}
