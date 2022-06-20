/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <rokerjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:52:23 by rokerjea          #+#    #+#             */
/*   Updated: 2022/06/20 13:08:49 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned long	i;
	unsigned char	*str;
	unsigned char	*sstr;

	i = 0;
	str = (unsigned char *)dst;
	sstr = (unsigned char *)src;
	while (i < n)
	{
		str[i] = sstr[i];
		i++;
	}
	return (dst);
}
