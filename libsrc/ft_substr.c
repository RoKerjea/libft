/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <rokerjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 18:53:18 by rokerjea          #+#    #+#             */
/*   Updated: 2022/06/20 13:06:44 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned long	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	char			*res;

	j = 0;
	i = 0;
	if ((ft_strlen(s) - start) < len && ft_strlen(s) > start)
		res = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else if (ft_strlen(s) < start)
		res = malloc(sizeof(char) * 1);
	else
		res = malloc(sizeof(char) * (len + 1));
	while (i < start)
		i++;
	while (j < len && s[i] && i < ft_strlen(s))
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
