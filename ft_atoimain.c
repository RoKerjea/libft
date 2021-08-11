/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:46:17 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 20:37:36 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	res = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res += str[i] - '0';
		i++;
	}
	if (neg == 1)
		res *= -1;
	return (res);
}

#include <stdlib.h>
#include <stdio.h>

int	main()
{
	char str[11] = "-2147483648";
	printf ("%i\n", atoi(str));
	printf ("%i\n", ft_atoi(str));
}
