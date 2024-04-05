/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 06:33:53 by ozouine           #+#    #+#             */
/*   Updated: 2024/03/28 13:59:41 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_liste **stack)
{
	t_liste	*head;
	t_liste	*new_head;
	int		tmp_data;
	int		tmp_index;

	if (ft_lstsize(stack) < 2)
		return (1);
	head = *stack;
	new_head = head->next;
	if (!head && !new_head)
		return ;
	tmp_data = head->data;
	tmp_index = head->index;
	head->data = new_head->data;
	head->index = new_head->index;
	new_head->data = tmp_data;
	new_head->index = tmp_index;
	return (0);
}

int	sa(t_liste **stack)
{
	if (swap(stack) == 1)
		return (1);
	ft_putstr_fd("sa", 1);
	return (0);
}

int	sb(t_liste **stack)
{
	if (swap(stack) == 1)
		return (1);
	ft_putstr_fd("sb", 1);
	return (0);
}

int	ss(t_liste **stacka, t_liste **stackb)
{
	if ((ft_lstsize(*stacka) < 2) || (ft_lstsize(*stackb) < 2))
		return (1);
	swap(stacka);
	swap(stackb);
	ft_putstr_fd("ss", 1);
	return (0);
}
