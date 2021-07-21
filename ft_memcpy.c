/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:52:23 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/15 15:52:18 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int i;
	unsigned char *str;
	unsigned char *sstr;
	
	i = 0;
	str = (unsigned char*)dst;
	sstr = (unsigned char*)src;

	while (i < n)
		{
		str[i] = sstr[i];
		i++;
		}
	return (dst);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char str[16] = "This is a test.";
	char str2[16] = "That is a test.";
	memcpy(str, str2, 4);
	printf("%s\n", str);

	char str3[16] = "This is a test.";
	char str4[16] = "That is a test.";
	ft_memcpy(str3, str4, 4);
	printf("%s\n", str3);
}
