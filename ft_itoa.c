/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:33:04 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/24 18:49:54 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_itoa(int n)
{
	char *res;
	long nb;
	int neg;
	int digitcount;

	neg = 0;
	if (nbr < 0)
	{
		nb = n * -1;
		neg = 1;
	}
	else
		nb = n;
	while (nbr != 0)
	{
		nbr /= 10;
		digitcount++;
	}

	return (res);
}


int	main()
{
	printf("%s\n", ft_itoa(1234));
	return (0);
}
