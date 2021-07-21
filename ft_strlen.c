/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:51:18 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/14 21:16:14 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long ft_strlen(const char *s)
{
	unsigned long i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char	str[16] = "This is a test.";
	printf("expected %lu\n", strlen(str));
	printf("result %lu\n", ft_strlen(str));
}
