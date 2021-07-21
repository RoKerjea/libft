/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:56:25 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/15 17:54:39 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{	
	int i;
	char *csrc;
	char *cdst;
	char temp[len];

	csrc = (char *) src;
	cdst = (char *) dst;

	i = 0;
	while (i < len)
	{
		temp[i] = csrc[i];
		i++;
	}

	i = 0;
	while (i < len)
	{
		cdst[i] = temp[i];
		i++;
	}
	return (dst);
}

#include <string.h>
int	main()
{
	char str1[50] = "This is a test.";
	char str2[50] = "That is a test.";
	memmove(str1 +5, str1, 15);
	printf("%s\n", str1);
	
	char str3[50] = "This is a test.";
	char str4[50] = "That is a test.";
	ft_memmove(str3 +5, str3, 15);
	printf("%s\n", str3);

}
