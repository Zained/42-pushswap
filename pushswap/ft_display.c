/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 18:16:12 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/18 18:37:09 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void		ft_display_xxx_1(void)
{
	if (D2)
	{
		ft_putendl("\033[31mHere your moves");
		sleep(1);
		ft_putstr(". ");
		sleep(1);
		ft_putstr(". ");
		sleep(1);
		ft_putendl(". ");
		ft_putstr("\033[34m\033[1m");
		ft_putendl("========================================================");
		ft_putstr("\033[0m");
	}
}

int			ft_display_xxx_sleep(t_stack *a, t_stack *b, int hitss)
{
	if (D3 && HITS != hitss)
	{
		print_stacks(a, b);
		sleep(3);
		return (HITS);
	}
	return (hitss);
}

void		ft_display_x_hits(void)
{
	if (D2)
		ft_putstr("\033[34m\033[1m");
	ft_putchar('\n');
	ft_putstr("-> ");
	ft_putnbr(HITS);
	ft_putendl(" HITS !");
}

void		ft_display_x(t_stack *a)
{
	int	last_a;

	if (D1)
	{
		if (D2)
			ft_putstr("\033[34m\033[1m");
		ft_putendl("========================================================");
		if (D2)
			sleep(1);
		ft_putstr("Sorted on A : ");
		last_a = a->prev->nb;
		while (a->nb != last_a)
		{
			if (D2)
				ft_putstr("\033[32m\033[1m");
			ft_putnbr(a->next->nb);
			ft_putchar(' ');
			a = a->next;
		}
		ft_display_x_hits();
	}
}

void		print_stacks(t_stack *a, t_stack *b)
{
	int size_a;
	int size_b;

	size_a = a->nb_elem;
	size_b = b->nb_elem;
	ft_putchar('\n');
	ft_putstr("A   | ");
	if (size_a > 0)
		while (size_a--)
		{
			ft_putnbr(a->next->nb);
			ft_putchar(' ');
			a = a->next;
		}
	ft_putchar('\n');
	ft_putstr("B   | ");
	if (size_b > 0)
		while (size_b--)
		{
			ft_putnbr(b->next->nb);
			ft_putchar(' ');
			b = b->next;
		}
	ft_putchar('\n');
}
