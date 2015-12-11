/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 18:54:06 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/18 18:56:36 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_stack		*ft_creat_element(int nb)
{
	t_stack	*new;

	new = NULL;
	if ((new = (t_stack *)malloc(sizeof(*new))))
	{
		new->nb = nb;
		new->prev = NULL;
		new->next = NULL;
	}
	if (!(new))
		ft_putstr("SOUCIS MALLOC");
	return (new);
}

int			ft_list_back(t_stack **x, int nb)
{
	t_stack	*tmp;
	t_stack	*new;

	tmp = *x;
	new = ft_creat_element(nb);
	if (new)
	{
		new->prev = tmp->prev;
		new->next = tmp;
		tmp->prev->next = new;
		tmp->prev = new;
		tmp->nb_elem = tmp->nb_elem + 1;
		return (0);
	}
	return (-1);
}

int			ft_list_front(t_stack **x, int nb)
{
	t_stack	*tmp;
	t_stack	*new;

	tmp = *x;
	new = ft_creat_element(nb);
	if (new)
	{
		new->prev = tmp;
		new->next = tmp->next;
		tmp->next->prev = new;
		tmp->next = new;
		tmp->nb_elem = tmp->nb_elem + 1;
		return (0);
	}
	return (-1);
}
