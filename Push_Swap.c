/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_Swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:25:08 by ozouine           #+#    #+#             */
/*   Updated: 2024/04/30 18:42:38 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var	variable;

	if (ac > 1)
	{
		variable.i = 1;
		variable.j = 1;
		variable.join = NULL;
		while (variable.i < ac)
		{
			if (check_digits(av[variable.i]) == 1
				|| check_spaces(av[variable.i]) == 1)
				return (ft_putstr_fd("Error", 1), 1);
			variable.i++;
		}
		while (variable.j < ac)
		{
			variable.str = variable.join;
			variable.join = ft_strjoin(variable.join, av[variable.j++]);
			free(variable.str);
		}
		if (processing(&variable.stacka, variable.join) == 1)
			sorting(&variable.stacka, &variable.stackb);
		free_stack(&variable.stacka);
		free_stack(&variable.stacka);
	}
}
