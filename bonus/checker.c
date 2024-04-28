/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 10:26:47 by ozouine           #+#    #+#             */
/*   Updated: 2024/04/28 12:19:35 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int main(int ac, char **av)
{
    if (ac > 1)
    {
    t_var   variable;
	t_liste	*stackA;
	t_liste	*stackB;

    variable.i = 1;
	variable.j = 1;
    variable.join = "";
    while (variable.i < ac)
    {
        if (check_digits(av[variable.i]) == 1 || check_spaces(av[variable.i]) == 1)
            return (ft_putstr_fd("error", 1), 1);
        variable.i++;
    }    
    while (variable.j < ac)
        variable.join = ft_strjoin(variable.join, av[variable.j++]);
    processing(&stackA, variable.join);
    main_helper(&stackA, &stackB);
    }
}
