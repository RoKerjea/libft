/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:33:04 by rokerjea          #+#    #+#             */
/*   Updated: 2021/08/02 12:24:56 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *res)
{
	int		i;
	int		j;
	char	buff;

	i = 0;
	j = 0;
	while (res[j])
		j++;
	while (j > i)
	{
		j--;
		buff = res[i];
		res[i] = res[j];
		res[j] = buff;
		i++;
	}
	return (res);
}

int	ft_digitcount(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count ++;
	}
	return (count);
}


#include <stdio.h>
char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		neg;
	int		i;

	i = 0;
	neg = 0;
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		neg = 1;
	}
	res = malloc(sizeof(char) * (ft_digitcount(n) + 1 + neg));
	if (!res)
		return (NULL);
	if (nb == 0)
		res[i++] = 48;
	while (nb != 0)
	{
		res[i++] = ((nb % 10) + 48);
		nb /= 10;
	}
	if (neg == 1)
		res[i++] = '-';
	res [i] = '\0';
	return (ft_strrev(res));
}

#include <stdio.h>
int	main()
{
	printf("%s\n", ft_itoa(0));
	return (0);
}
