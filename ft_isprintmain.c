/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:46:26 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 15:23:16 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;

	c = 35
zsh:1: command not found: q

	printf("expected is %d\n", isprint(c));
	printf("result is %d\n", ft_isprint(c));
}
