/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 18:59:36 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/20 15:01:23 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int		ft_check_exception(int ac, t_stack *a)
{
	(void)ac;
	if (a->nb_elem == 3 && a->next->nb > a->next->next->nb && \
		a->next->next->nb > a->next->next->next->nb)
	{
		swap(&a);
		ft_putstr("sa ");
		rev_rotate(&a);
		ft_putstr("rra ");
	}
	return (0);
}

int		ft_check_bonus(int ac, char **av)
{
	if (ac > 2 && av[1][0] == '-' && av[1][1] == 'x')
		D1++;
	if (ac > 2 && av[1][0] == '-' && av[1][1] == 'x' && av[1][2] == 'x')
		D2++;
	if (ac > 2 && av[1][0] == '-' && av[1][1] == 'x' && \
		av[1][2] == 'x' && av[1][3] == 'x')
		D3++;
	if (D1 || D2 || D3)
		return (1);
	return (0);
}

void	ft_check_arg_helper(char **av, int ac, int *tab_nb, t_stack **a)
{
	int i;
	int j;

	(void)av;
	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (tab_nb[i] == tab_nb[j] && i != j)
			{
				ft_putendl("Error");
				exit(-1);
			}
			j++;
		}
		i++;
	}
	ft_check_exception(ac, *a);
}

void	ft_check_arg(char **av, int ac, t_stack **a)
{
	t_stack	*tmp;
	int		*tab_nb;
	int		i;

	i = 1;
	tmp = *a;
	tab_nb = (int *)malloc(sizeof(int) * ac);
	if (ft_check_bonus(ac, av))
		i++;
	while (av[i])
	{
		if (ft_is_int(av[i]))
		{
			ft_list_back(&tmp, ft_atoi(av[i]));
			tab_nb[i] = ft_atoi(av[i]);
		}
		else
		{
			ft_putendl("Error");
			exit (0);
		}
		i++;
	}
	ft_check_arg_helper(av, ac, tab_nb, a);
}
