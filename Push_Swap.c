/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_Swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:25:08 by ozouine           #+#    #+#             */
/*   Updated: 2024/04/27 19:54:39 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_free(char **s, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

int main(int ac, char **av)
{
	t_liste	*stackA;
	t_liste	*stackB;
    int i = 1;
    int j = 1;
    char *join;

    join = "";
    while (i < ac)
    {
        if (check_digits(av[i]) == 1 || check_spaces(av[i]) == 1)
        {
            ft_putstr_fd("error", 1);
            return (1);
        }
        i++;
    }    
    while (j < ac)
        join = ft_strjoin(join, av[j++]);
    if (processing(&stackA, join) == 1)
        sorting(&stackA, &stackB);
    free_stack(&stackA);
    // if (stackB != NULL)
	free_stack(&stackB);
    
}
