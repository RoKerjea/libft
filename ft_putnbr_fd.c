/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:58:57 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/26 16:18:13 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd , &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd('0' + nb % 10, fd);
}

int main()
{
	int test = -1024;
	ft_putnbr_fd(test, 1);
	return (0);
}
