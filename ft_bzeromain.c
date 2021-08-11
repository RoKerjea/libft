/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:17:35 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 15:32:27 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

#include <strings.h>
#include <stdio.h>
int main()
{
	char str[16] = "This is test.";
	bzero(str, 5);
	printf("expected is \'%c\'\n", str[5]);

	char str2[16] = "This is test.";
	ft_bzero(str2, 5);
	printf("expected is \'%c\'\n", str2[5]);
}
