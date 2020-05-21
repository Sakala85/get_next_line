/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 21:25:00 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/20 21:31:01 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *nouveau)
{
	if (alst != NULL || nouveau != NULL)
	{
		nouveau->next = *alst;
		*alst = nouveau;
	}
}
