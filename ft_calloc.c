/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 20:30:55 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/21 16:51:15 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	ptr = malloc(count * size);
		if (ptr == NULL)
		return (0);
	while (i <= count * size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
