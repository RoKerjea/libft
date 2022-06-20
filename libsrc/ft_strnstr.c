/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <rokerjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:05:11 by rokerjea          #+#    #+#             */
/*   Updated: 2022/06/20 13:11:05 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;
	char			*hay;

	i = 0;
	hay = (char *)haystack;
	if (needle[0] == '\0')
		return (hay);
	while (i < len && hay[i])
	{
		j = 0;
		while (needle[j] == hay[i + j])
		{
			if (needle[j + 1] == '\0' && (i + j) < len)
				return (&hay[i]);
			j++;
		}
		i++;
	}
	return (0);
}
