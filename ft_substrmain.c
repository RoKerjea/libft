/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 18:53:18 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/30 17:24:09 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

unsigned long	ft_strlen(const char *s);

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	char	*res;

	j = 0;
	i = start;

	printf("len de s : %lu\n", ft_strlen(s));
	printf("start de res dans s : %u\n", start);
	printf("lenmax de res : %lu\n", len);
  
	printf("len de s moins start : %lu\n", (ft_strlen(s) - start));
	if ((ft_strlen(s) - start) < len && ft_strlen(s) > start)
	{
		printf("un\n");
		res = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	}
	else if (ft_strlen(s) < start)
	{
		printf("deux\n");
		res = malloc(sizeof(char) * 1);
	}
	else
	{
		printf("trois\n");
		res = malloc(sizeof(char) * (len  + 1));
	}
	while (i < start) 
		i++;
/*	if (s[i] == '\0')
		return (0);
*/

	printf ("%lu\n", j);
	while (j < len && s[i] && i < ft_strlen(s))
	{
		res[j] = s[i];
		i++;
		j++;
	}
	printf ("%lu\n", j);
	res[j] = '\0';
	return (res);
}

#include <stdio.h>
int	main()
{
	char str[10] = "tripouille";
	printf("%s\n", ft_substr(str, 42, 42000000));
	return (0);
}
