/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 15:42:04 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 18:41:45 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	wordcount;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			wordcount++;
		i++;
	}
	return (wordcount + 1);
}

int	ft_lenword(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i])
	{
		i++;
		j++;
	}
	return (j + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		wnum;
	int		i;
	int		j;

	res = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!res || !s)
		return (0);
	wnum = 0;
	i = 0;
	while (wnum < ft_wordcount(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		res[wnum] = malloc(sizeof(char) * (ft_lenword(s, c, i)));
		if (!(res[wnum]))
			return (0);
		while (s[i] != c && s[i])
			res[wnum][j++] = s[i++];
		res[wnum][j] = '\0';
		printf("test : %s\n", res[wnum]);
		wnum++;
	}
	res[wnum] = NULL;
	return (res);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int		main(void)
{
	char **test;
	int i;

	i = 0;
	test = ft_split("Hey aaahah, bon au taff camarades !", 'a');
	while(test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	printf("%s\n", test[i]);
	i = 0;
	while(test[i])
	{
		free(test[i]);
		i++;
	}
	free(test[i]);
	free(test);
	return (0);
}
