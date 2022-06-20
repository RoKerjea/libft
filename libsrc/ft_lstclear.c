/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <rokerjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:22:47 by rokerjea          #+#    #+#             */
/*   Updated: 2022/06/20 13:08:10 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	int	i;

	i = 0;
	while(lst[i])
	{	
		ft_lstdelone(lst[i], del);
		i++;
	}
	lst = NULL;
}
