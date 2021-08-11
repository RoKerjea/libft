/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:47:27 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 15:59:23 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main()
{
	char str[17] = "This is a test";
	int c;
	c = 'T';
	printf("%s\n", strrchr(str, c));

	char str2[17] = "This is a test";
	int c2;
	c2 = 'T';
	printf("%s\n", ft_strrchr(str2, c2));
}
