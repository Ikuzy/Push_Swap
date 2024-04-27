/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:51:01 by ozouine           #+#    #+#             */
/*   Updated: 2024/04/27 19:46:40 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	return (ft_strncmp(str1, str2, ft_strlen(str1) + 1));
}

int	check_instructions(char *str, t_liste **stackA, t_liste **stackB)
{
	if (!ft_strcmp(str, "pa\n"))
		return (pa(stackA, stackB), 0);
	else if (!ft_strcmp(str, "pb\n"))
		return (pb(stackA, stackB), 0);
	else if (!ft_strcmp(str, "sa\n"))
		return (sa(*stackA), 0);
	else if (!ft_strcmp(str, "sb\n"))
		return (sb(*stackB), 0);
	else if (!ft_strcmp(str, "ss\n"))
		return (ss(stackA, stackB), 0);
	else if (!ft_strcmp(str, "ra\n"))
		return (ra(stackA), 0);
	else if (!ft_strcmp(str, "rb\n"))
		return (rb(stackB), 0);
	else if (!ft_strcmp(str, "rr\n"))
		return (rr(stackA, stackB), 0);
	else if (!ft_strcmp(str, "rra\n"))
		return (rra(stackA), 0);
	else if (!ft_strcmp(str, "rrb\n"))
		return (rrb(stackB), 0);
	else if (!ft_strcmp(str, "rrr\n"))
		return (rrr(stackA, stackB), 0);
	else
		return (1);
}

int	get_instructions(t_liste **stackA, t_liste **stackB)
{
	char	*temp;

	temp = get_next_line(0);
	if (temp == NULL)
	{
		if (is_sorted(*stackA))
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
		return (free_stack(stackA), free_stack(stackB),
			exit(EXIT_FAILURE), 0);
	}
	while (temp != NULL)
	{
		if (temp[0] == '\n')
			return (free(temp), 0);
		if (check_instructions(temp, stackA, stackB))
			return (free(temp), 0);
		free(temp);
		temp = get_next_line(0);
	}
	return (1);
}

void	main_helper(t_liste *stackA, t_liste *stackB, int p)
{
	if (check_double(stackA, p))
		return (free_stack(&stackA), exit(EXIT_FAILURE));
	if (!get_instructions(&stackA, &stackB))
		return (write(2, "Error\n", 6), free_stack(&stackA),
			free_stack(&stackB), exit(EXIT_FAILURE));
	if (check_sort(stackA) && ft_lstsize(stackB) == 0)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	free_stack(&stackA);
	if (stackB != NULL)
		free_stack(&stackB);
}