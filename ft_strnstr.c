/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:05:11 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/19 16:46:09 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	char *hay;

	i = 0;
	hay = (char *)haystack;
	
	if (needle[0] == '\0')
		return (hay);
	while (i < len && hay[i])
	{
		j = 0;
		while (needle[j] == hay[i + j])
		{
			if (needle[j] == '\0')
				return (&hay[i]);
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char str[17] = "This is a test.";
	char str2[6] = "";
	printf ("%s\n", strnstr(str, str2, 17));
	printf ("%s\n", ft_strnstr(str, str2, 17));
}
