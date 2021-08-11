/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:55:13 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/15 18:53:41 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (c - ('a' - 'A'));
	else
		return (c);
}
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%c\n", toupper('t'));
	printf("%c\n", ft_toupper('t'));
	return(0);
}
