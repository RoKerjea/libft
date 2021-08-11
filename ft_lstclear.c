/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokerjea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:22:47 by rokerjea          #+#    #+#             */
/*   Updated: 2021/08/11 19:00:42 by rokerjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlb.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *maillon;

	maillon = *lst;
	while(maillon)
	{
	ft_lstdelone(maillon, del);
	maillon = maillon->next;
	}
	**lst = NULL;
}
