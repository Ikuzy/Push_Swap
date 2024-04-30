/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 10:26:47 by ozouine           #+#    #+#             */
/*   Updated: 2024/04/30 18:44:15 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_var	variable;

	if (ac > 1)
	{
		variable.stacka = NULL;
		variable.stackb = NULL;
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
		processing(&variable.stacka, variable.join);
		main_helper(&variable.stacka, &variable.stackb);
	}
}
