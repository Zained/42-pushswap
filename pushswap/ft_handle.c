/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 14:47:35 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/18 18:36:26 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	ft_handle(t_stack *a, t_stack *b)
{
	int hitss;

	hitss = HITS;
	ft_display_xxx_1();
	while (a->next != a)
	{
		hitss = ft_display_xxx_sleep(a, b, hitss);
		if ((a->next->nb > a->next->next->nb) && \
			(a->next->nb < a->next->next->next->nb))
		{
			swap(&a);
			D2 ? ft_putstr("\033[32m\033[1msa \033[0m") : ft_putstr("sa ");
		}
		hitss = ft_display_xxx_sleep(a, b, hitss);
		if (b->nb_elem == 0 && ft_is_sort(a))
			return ;
		ft_handle_rotate(a, b);
		if ((b->nb_elem == 0 && ft_is_sort(a)) || \
			(b->nb_elem != 0 && ft_is_sort(a) && a->next->nb > b->next->nb))
			return ;
		push_a(&a, &b);
		D2 ? ft_putstr("\033[033m\033[1mpb \033[0m") : ft_putstr("pb ");
		if (b->nb_elem == 0 && ft_is_sort(a))
			return ;
	}
}

void	ft_handle_rotate(t_stack *a, t_stack *b)
{
	int i;
	int hitss;

	hitss = HITS;
	i = ft_search(a);
	if (i > (a->nb_elem / 2) && (a->nb_elem) != 1)
		while (i++ < a->nb_elem)
		{
			rev_rotate(&a);
			D2 ? ft_putstr("\033[035m\033[1mrra \033[0m") : ft_putstr("rra ");
			hitss = ft_display_xxx_sleep(a, b, hitss);
		}
	else
	{
		while (i-- > 0)
		{
			rotate(&a);
			D2 ? ft_putstr("\033[036m\033[1mra \033[0m") : ft_putstr("ra ");
			hitss = ft_display_xxx_sleep(a, b, hitss);
		}
	}
}

void	ft_handle_stack_b(t_stack *a, t_stack *b)
{
	int hitss;

	hitss = HITS;
	while (b->next != b)
	{
		if (D3 && HITS != hitss)
		{
			hitss = HITS;
			print_stacks(a, b);
			sleep(3);
		}
		if (push_b(&a, &b) == -1)
			return ;
		D2 ? ft_putstr("\033[031m\033[1mpa \033[0m") : ft_putstr("pa ");
	}
	ft_putchar('\n');
}
