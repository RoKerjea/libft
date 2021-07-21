/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 18:53:18 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/21 19:29:54 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	int j;
	char *res;
	
	j = 0;
	i = 0;
	res = malloc(sizeof(char) * len);
	while (i < start)
		i++;
	if (s[i] == '\0')
		return (0);
	while (j < len && s[i])
	{
		res[j] = s[i];
		i++;
		j++;
	}
	return (res);
}

#include <stdio.h>
int	main()
{
	printf("%s\n", substr())	


}
