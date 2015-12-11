/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 15:55:19 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/18 19:08:46 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void		swap(t_stack **x)
{
	t_stack *tmp;

	tmp = (*x)->next->next;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	tmp->prev = (*x);
	tmp->next = (*x)->next;
	(*x)->next->prev = tmp;
	(*x)->next = tmp;
	HITS++;
}

void		rotate(t_stack **x)
{
	(*x)->prev->next = (*x)->next;
	(*x)->next->prev = (*x)->prev;
	(*x)->prev = (*x)->next;
	(*x)->next = (*x)->prev->next;
	(*x)->prev->next = (*x);
	(*x)->next->prev = (*x);
	HITS++;
}

void		rev_rotate(t_stack **x)
{
	(*x)->prev->next = (*x)->next;
	(*x)->next->prev = (*x)->prev;
	(*x)->next = (*x)->prev;
	(*x)->prev = (*x)->prev->prev;
	(*x)->prev->next = (*x);
	(*x)->next->prev = (*x);
	HITS++;
}

int			push_b(t_stack **a, t_stack **b)
{
	t_stack *tmp;

	if ((ft_list_front(a, (*b)->next->nb)) == -1)
		return (-1);
	tmp = (*b)->next;
	(*b)->next = (*b)->next->next;
	(*b)->nb_elem = (*b)->nb_elem - 1;
	free(tmp);
	HITS++;
	return (0);
}

int			push_a(t_stack **a, t_stack **b)
{
	t_stack *tmp;

	if ((ft_list_front(b, (*a)->next->nb)) == -1)
		return (-1);
	tmp = (*a)->next;
	(*a)->next = (*a)->next->next;
	(*a)->nb_elem = (*a)->nb_elem - 1;
	free(tmp);
	HITS++;
	return (0);
}
