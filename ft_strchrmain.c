/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:21:35 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 15:58:05 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return ((char *)s);
	while(*s++)
	{
		if (*s == c)
			return ((char *)s);
	}
	return (0);
}
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main()
{
	char str[17] = "This is a test";
	int c;
	c = 'h';
	printf("%s\n", strchr(str, c));

	char str2[17] = "This is a test";
	int c2;
	c2 = 'h';
	printf("%s\n", ft_strchr(str2, c2));
}
