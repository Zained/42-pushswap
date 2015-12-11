/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 13:12:17 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/20 14:31:52 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int		ft_is_sort(t_stack *x)
{
	t_stack *tmp;

	tmp = x->next->next;
	while (tmp != x)
	{
		if ((tmp->prev->nb) > (tmp->nb))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int		ft_search(t_stack *a)
{
	int		min_max;
	t_stack	*tmp;
	int		i;
	int		pos;

	i = 0;
	tmp = a->next;
	min_max = tmp->nb;
	pos = 0;
	while (tmp != a)
	{
		if (tmp->nb < min_max)
		{
			min_max = tmp->nb;
			pos = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (pos);
}
