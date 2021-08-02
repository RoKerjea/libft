/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:05:11 by rokerjea          #+#    #+#             */
/*   Updated: 2021/08/02 11:27:12 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;
	char			*hay;

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
