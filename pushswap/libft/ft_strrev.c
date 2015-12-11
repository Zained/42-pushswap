/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 16:51:29 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/21 16:54:25 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int x;
	int i;
	char tmp;

	i = 0;
	x = ft_strlen(str) - 1;
	while (i < ((x / 2) + 1))
	{
		tmp = str[i];
		str[i] = str[x - i];
		str[x - i] = tmp;
		i++;
	}
	return (str);
}
