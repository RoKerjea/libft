/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:56:25 by rokerjea          #+#    #+#             */
/*   Updated: 2021/08/02 14:25:41 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	unsigned long	i;
	char			*csrc;
	char			*cdst;

	csrc = (char *) src;
	cdst = (char *) dst;
	i = 0;
	if (dst > src)
	{
		while (len > 0)
		{
			cdst[len - 1] = csrc[len - 1];
			len--;;
		}
	}
	else
	{
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
