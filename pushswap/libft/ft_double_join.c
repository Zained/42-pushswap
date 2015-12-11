/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 19:09:02 by mdriay            #+#    #+#             */
/*   Updated: 2015/04/07 19:09:31 by mdriay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_double_join(char *s1, char *spec, char *s2)
{
	char	*tmp;
	char	*tmp2;

	tmp = ft_strjoin(s1, spec);
	tmp2 = ft_strjoin(tmp, s2);
	free(tmp);
	return (tmp2);
}
