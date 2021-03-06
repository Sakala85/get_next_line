/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 08:54:17 by mbengtss          #+#    #+#             */
/*   Updated: 2018/04/10 08:54:19 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_max(int *tab, int size)
{
	int i;
	int max;

	i = 0;
	max = tab[i];
	while (i < size)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
