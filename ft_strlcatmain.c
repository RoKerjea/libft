/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 16:50:48 by rokerjea          #+#    #+#             */
/*   Updated: 2021/08/02 12:17:55 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;
	unsigned long	destlen;
	unsigned long	srclen;

	i = 0;
	destlen = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	while (dst[destlen])
		destlen++;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= destlen)
		return (dstsize + srclen);
	while ((destlen + i) < dstsize - 1 && src[i])
	{
		printf ("tes un\n");
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char dest[13] = "BBBB";
	char src[9] = "AAAAAAAAA";
	printf ("ft size = %lu \n", ft_strlcat(dest, src, 6));
	printf ("%s\n", dest);
	char dest2[13] = "BBBB";
	printf ("ori size = %lu \n", strlcat(dest2, src, 6));
	printf ("%s\n", dest2);
}
