/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:30:26 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 15:26:35 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

#include <string.h>
#include <stdio.h>
int	main()
{

	char str[16] = "This is a test."; 
	memset(str + 2, '$', 10*sizeof(char));
	printf("expected is \'%s\'\n", str);

	char str2[16] = "This is a test.";
	ft_memset(str2 + 3, '$', 10*sizeof(char));
	printf("result is \'%s\'\n", str2);
}
