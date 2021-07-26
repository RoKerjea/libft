/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:18:27 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/26 17:05:24 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *res;
	int i;

	i = 0;
	res = malloc(sizeof(char) * (ft_strlen(res) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;	
	}
	res[i] = '\0';
	return (res);
}
