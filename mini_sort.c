/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:01:14 by ozouine           #+#    #+#             */
/*   Updated: 2024/03/29 22:07:42 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_2(t_liste **stack)
{
	t_liste	*first;

	first = *stack;
	if (first->data == maximum(stack))
		sa(stack);
}

void	sorting_3(t_liste	**stack)
{
	t_liste	*last;
	t_liste	*first;

	last = ft_lstlast(*stack);
	first = *stack;
	if (ft_lstlast(*stack)->data == maximum(stack))
	{
		if (first->data != minimum(stack))
			sa(stack);
	}
	else if (ft_lstlast(*stack)->data == minimum(stack))
	{
		if (first->data == maximum(stack))
			sa(stack);
		rra(stack);
	}
	else if (ft_lstlast(*stack)->data != maximum(stack)
		&& ft_lstlast(*stack)->data != minimum(stack))
	{
		if (first->data == minimum(stack))
			sa(stack);
		ra(stack);
	}
}

void	sorting_4(t_liste **stackA, t_liste **stackB)
{
	t_liste	*min;
	int		i;

	min = *stackA;
	i = 0;
	while ((min->data != minimum(stackA)) && min->next != NULL)
	{
		min = min->next;
		i++;
	}
	while (i-- > 0)
		ra(stackA);
	pa(stackA, stackB);

	sorting_3(stackA);
	pb(stackB, stackA);
}

void	sorting_5(t_liste **stackA, t_liste **stackB)
{
	t_liste	*min;
	int		i;

	min = *stackA;
	i = 0;
	while ((min->data != minimum(stackA)) && min->next != NULL)
	{
		min = min->next;
		i++;
	}
	while (i-- > 0)
		ra(stackA);
	pa(stackA, stackB);
	sorting_4(stackA, stackB);
	pb(stackB, stackA);
}
