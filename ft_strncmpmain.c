/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:44:28 by rokerjea          #+#    #+#             */
/*   Updated: 2021/07/27 16:00:44 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char str[16] = "This is a test.";
	char str2[20] = "This is a test";
	printf ("resultat : %i\n", strncmp(str, str2, 17777777));

	char str3[16] = "This is a test.";
	char str4[20] = "This is a test";
	printf ("resultat : %i\n", ft_strncmp(str3, str4, 17));
}
