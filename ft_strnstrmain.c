/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:05:11 by rokerjea          #+#    #+#             */
/*   Updated: 2021/08/02 11:26:20 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	if (needle[0] == '\0')
		return (hay);
	while (i < len && hay[i])
	{
		j = 0;
		while (needle[j] == hay[i + j])
		{

			if (needle[j + 1] == '\0' && (i + j) < len)
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
	char str[30] = "aaabcabcd";
	char str2[10] = "cd";
	printf ("%s\n", strnstr(str, str2, 8));
	printf ("%s\n", ft_strnstr(str, str2, 8));
}
