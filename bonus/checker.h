/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:43:31 by ozouine           #+#    #+#             */
/*   Updated: 2024/04/27 17:42:12 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stddef.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <fcntl.h>


# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

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
void	indexing(t_liste **stack, int *tab, int p);
int		ft_lstsize(t_liste *lst);
t_liste	*ft_lstlast(t_liste *lst);
t_liste	*ft_lstnew(int content);
void	ft_lstadd_front(t_liste **lst, t_liste *new);
void	ft_lstadd_back(t_liste **lst, t_liste *new);
void	fill_stack(t_liste **stack, int *tab, int p);
void	sorting_2(t_liste **stack);
void	sorting_3(t_liste	**stack);
void	sorting_4(t_liste **stackA, t_liste **stackB);
void	sorting_5(t_liste **stackA, t_liste **stackB);
long	ft_atoi(char *nptr);
int		ft_strlen(char *s);
void	ft_putchar_fd(char c, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		check_digits(char *str);
int		check_double(int *tab, int p);
int 	check_spaces(char *str);
int 	ft_strslen(char **str);
int		*sort_tab(int *tab, int p);
void	Push_to_b(t_liste **stackA, t_liste **stackB, int p);
void	Push_to_a(t_liste **stackA, t_liste **stackB);
int		get_idx_pst(t_liste *stack, int i);
int		get_highest_pst(t_liste *stack, int i);
void 	sorting(t_liste **stackA, t_liste **stackB);
void 	processing(t_liste **stackA, char *join);
char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		check_instructions(char *str, t_liste **stackA, t_liste **stackB);
int		get_instructions(t_liste **stackA, t_liste **stackB);
int		check_sort(t_liste **stackA);
void	main_helper(t_liste *stackA, t_liste *stackB, int p);
long	atoi_check(long result);


#endif