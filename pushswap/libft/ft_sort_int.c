/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/20 14:29:57 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/20 14:30:49 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_int(int ac, int *tab_nb)
{
	int start;
	int end;
	int mid;

	if (ac < 2)
		return ;
	mid = tab_nb[ac / 2];
	start = 0;
	end = ac - 1;
	while (1)
	{
		while (tab_nb[start] < mid)
			start++;
		while (tab_nb[end] > mid)
			end--;
		if (start >= end)
			break ;
		ft_intswap(tab_nb + start, tab_nb + end);
		start++;
		end--;
	}
	ft_sort_int(start, tab_nb);
	ft_sort_int(ac - start, tab_nb + start);
}
