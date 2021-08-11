/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:54:05 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/15 19:10:14 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}

#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%c\n", tolower('&'));
	printf("%c\n", ft_tolower('&'));
	return (0);
}
