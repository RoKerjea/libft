/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:57:17 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/19 19:04:04 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int srclen;
	int i;

	srclen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	if (dstsize == 0)
		return (srclen);
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

#include <stdio.h>
#include <string.h>
int main ()
{
	 char str[17] = "This is a test.";
	 char str2[6] = "Nope";
	 char str3[17] = "This is a test.";
	 char str4[6] = "Nope";
	 printf ("%lu\n", strlcpy(str, str2, 2));
	 printf ("%lu\n", ft_strlcpy(str3, str4, 2));
}
