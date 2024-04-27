/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 06:32:28 by ozouine           #+#    #+#             */
/*   Updated: 2024/04/25 18:16:21 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	maximum(t_liste	**stack)
{
	t_liste	*head;
	int		max;

	head = *stack;
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

	head = *stack;
	min = head->data;
	while (head)
	{
		if (min > head->data)
			min = head->data;
		head = head->next;
	}
	return (min);
}
