/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 06:39:22 by ozouine           #+#    #+#             */
/*   Updated: 2024/04/21 16:17:32 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_liste
{
	int				data;
	int				index;
	struct s_liste	*next;
}	t_liste;

void	ft_putstr_fd(char *s, int fd);
int		swap(t_liste **stack);
int		sa(t_liste **stack);
int		sb(t_liste **stack);
int		ss(t_liste **stacka, t_liste **stackb);
int		push(t_liste **stackS, t_liste **stackD);
int		pa(t_liste **stackA, t_liste **stackB);
int		pb(t_liste **stackA, t_liste **stackB);
int		rotate(t_liste **stack);
int		ra(t_liste **stackA);
int		rb(t_liste **stackB);
int		rr(t_liste **stackA, t_liste **stackB);
int		rev_rotate(t_liste **stack);
int		rra(t_liste **stackA);
int		rrb(t_liste **stackB);
int		rrr(t_liste **stackA, t_liste **stackB);
int		maximum(t_liste	**stack);
int		minimum(t_liste **stack);
void	indexing(t_liste **stack);
int		ft_lstsize(t_liste *lst);
t_liste	*ft_lstlast(t_liste *lst);
void	ft_lstadd_front(t_liste **lst, t_liste *new);
void	ft_lstadd_back(t_liste **lst, t_liste *new);
void	sorting_2(t_liste **stack);
void	sorting_3(t_liste	**stack);
void	sorting_4(t_liste **stackA, t_liste **stackB);
void	sorting_5(t_liste **stackA, t_liste **stackB);
int		ft_atoi(const char *nptr);


#endif