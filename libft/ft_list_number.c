/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 08:53:53 by mbengtss          #+#    #+#             */
/*   Updated: 2018/04/10 08:53:57 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_list_number(t_list **items, int nbr)
{
	t_list	*tmp;
	int		current_num;

	current_num = 0;
	tmp = *items;
	while (current_num < nbr)
	{
		tmp = tmp->next;
		current_num++;
	}
	return (tmp);
}
