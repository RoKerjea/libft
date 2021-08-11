/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:51:18 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 15:24:40 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int main()
{
	char	str[16] = "This is a test.";
	printf("expected %lu\n", strlen(str));
	printf("result %lu\n", ft_strlen(str));
}
