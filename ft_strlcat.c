/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 16:50:48 by rokerjea          #+#    #+#             */
/*   Updated: 2021/08/02 12:17:42 by rokerjea         ###   ########.fr       */
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
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}
