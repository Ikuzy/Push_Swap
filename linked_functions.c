/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:49:24 by ozouine           #+#    #+#             */
/*   Updated: 2024/03/28 14:57:00 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_liste *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_liste	*ft_lstlast(t_liste *lst)
{
	t_liste	*tmp;

	tmp = lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
