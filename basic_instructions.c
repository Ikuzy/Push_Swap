/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 06:32:28 by ozouine           #+#    #+#             */
/*   Updated: 2024/03/28 14:40:32 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	maximum(t_liste	**stack)
{
	t_liste	*head;
	int		max;

	max = head->data;
	while (head)
	{
		if (max < head->data)
			max = head->data;
		head = head->next;
	}
	return (max);
}

int	minimum(t_liste **stack)
{
	t_liste	*head;
	int		min;

	min = head->data;
	while (head)
	{
		if (min > head->data)
			min = head->data;
		head = head->next;
	}
	return (min);
}

void	indexing(t_liste **stack)
{
	t_liste	*head;
	int		i;

	i = 0;
	head = *stack;
	while (head)
	{
		head->index = i++;
		head = head->next;
	}
}
