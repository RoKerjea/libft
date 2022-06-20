/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <rokerjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:33:04 by rokerjea          #+#    #+#             */
/*   Updated: 2022/06/20 13:08:00 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		i;

	i = 0;
	nb = n;
	if (n < 0)
		nb *= -1;
	res = malloc(sizeof(char) * (ft_digitcount(n) + 2));
	if (!res)
		return (NULL);
	if (nb == 0)
		res[i++] = 48;
	while (nb != 0)
	{
		res[i++] = ((nb % 10) + 48);
		nb /= 10;
	}
	if (n < 0)
		res[i++] = '-';
	res[i] = '\0';
	return (ft_strrev(res));
}
