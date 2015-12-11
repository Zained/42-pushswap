/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 15:53:52 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/18 19:46:35 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int g_hits;
int g_display_first;
int g_display_two;
int g_display_three;

int		ft_init_struct(t_stack **a, t_stack **b)
{
	if ((*a = (t_stack*)malloc(sizeof(**a))) == NULL)
	{
		ft_putstr("Error Malloc");
		return (-1);
	}
	(*a)->nb_elem = 0;
	(*a)->next = (*a);
	(*a)->prev = (*a);
	if ((*b = (t_stack *)malloc(sizeof(**b))) == NULL)
	{
		ft_putstr("Error Malloc");
		return (-1);
	}
	(*b)->nb_elem = 0;
	(*b)->next = (*b);
	(*b)->prev = (*b);
	return (0);
}

int		main(int ac, char **av)
{
	t_stack	*a;
	t_stack *b;

	g_hits = 0;
	g_display_first = 0;
	g_display_two = 0;
	g_display_three = 0;
	if (ac < 2)
		return (0);
	if (ft_init_struct(&a, &b) == -1)
		return (-1);
	ft_check_arg(av, ac, &a);
	if (ft_is_sort(a) == 1)
		ft_putchar('\n');
	else
	{
		ft_handle(a, b);
		ft_handle_stack_b(a, b);
	}
	ft_display_x(a);
	return (0);
}
