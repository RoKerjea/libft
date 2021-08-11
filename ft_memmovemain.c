/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:56:25 by rokerjea          #+#    #+#             */
/*   Updated: 2021/08/02 14:23:34 by rokerjea         ###   ########.fr       */
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
			len--;
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

#include <string.h>
int	main()
{
	char str1[] = {67, 68, 67, 68, 69, 0, 45};
//	char str2[] = "That is a test.";
	memmove(str1 + 1, str1, 2);
	printf("%s\n", str1);
	
	//char str3[50] = "This is a test.";
	char str3[] = {67, 68, 67, 68, 69, 0, 45};
	//char str4[50] = "That is a test.";
	ft_memmove(str3 + 1, str3, 2);
	printf("%s\n", str3);
}
