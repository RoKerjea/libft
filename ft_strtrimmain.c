/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:53:24 by rokerjea          #+#    #+#             */
/*   Updated: 2021/08/02 10:38:17 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>
int	ft_isinstr(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[j])
		j++;
	while (ft_isinstr(s1[i], set))
		i++;
	j--;
	while (ft_isinstr(s1[j], set))
		j--;
	printf (" i = %i\n", i);
	printf (" j = %i\n", j);
	if (j <= i)
	{
	printf ("test un\n", j);
		res = malloc(sizeof(char) * 1);
		res[k] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * (j - i + 1));

	printf ("test\n", j);
	/*	if (j <= i == 0)
	{
		res = malloc(sizeof(char) * 1);
		res[k] = '\0';
		return (res);
	}
*/	while (i <= j)
	{
		res[k] = s1[i];
		i++;
		k++;
	}
	printf (" k = %i\n", k);
	res[k] = '\0';
	return (res);
}

#include <stdio.h>

int	main()
{
	char str[13] = "   xxx   xxx";
	char set[2] = " x";
	printf ("%s\n", ft_strtrim(str, set));
	return (0);
}
