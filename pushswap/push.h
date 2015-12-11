/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 16:12:16 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/20 14:48:47 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include "libft.h"
# include "stdio.h"
# define HITS g_hits
# define D1 g_display_first
# define D2 g_display_two
# define D3 g_display_three

extern	int			g_hits;
extern	int			g_display_first;
extern	int			g_display_two;
extern	int			g_display_three;
typedef struct		s_stack
{
	int				nb;
	int				nb_elem;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

int					ft_check_exception(int ac, t_stack *a);
int					ft_search(t_stack *a);
int					ft_is_sort(t_stack *x);
void				ft_check_arg(char **av, int ac, t_stack **a);
void				ft_check_arg_helper(char **av, int ac, \
					int *tab_nb, t_stack **a);
int					ft_check_bonus(int ac, char **av);
int					ft_init_struct(t_stack **a, t_stack **b);
t_stack				*ft_creat_element(int nb);
int					ft_list_back(t_stack **x, int nb);
int					ft_list_front(t_stack **x, int nb);
void				ft_handle(t_stack *a, t_stack *b);
void				ft_handle_rotate(t_stack *a, t_stack *b);
void				ft_handle_stack_b(t_stack *a, t_stack *b);
void				swap(t_stack **x);
void				rotate(t_stack **x);
void				rev_rotate(t_stack **x);
int					push_b(t_stack **a, t_stack **b);
int					push_a(t_stack **a, t_stack **b);
int					ft_display_xxx_sleep(t_stack *a, t_stack *b, int hitss);
void				ft_display_x(t_stack *a);
void				ft_display_xxx_1(void);
void				print_stacks(t_stack *a, t_stack *b);

#endif
