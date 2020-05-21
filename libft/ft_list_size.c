/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 08:54:05 by mbengtss          #+#    #+#             */
/*   Updated: 2018/04/10 08:54:08 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_list_size(t_list **items)
{
	t_list	*tmp;
	int		size;

	size = 0;
	tmp = *items;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
