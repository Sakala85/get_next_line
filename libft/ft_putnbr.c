/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:16:00 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/21 15:07:43 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_recnb(long n)
{
	if (n > 9)
	{
		ft_recnb(n / 10);
		ft_putchar((n % 10 + 48));
	}
	else
		ft_putchar(n + 48);
}

void			ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	ft_recnb(nb);
}
