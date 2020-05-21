/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:43:16 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/21 15:07:27 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_recnb_fd(long n, int fd)
{
	if (n > 9)
	{
		ft_recnb_fd(n / 10, fd);
		ft_putchar_fd((n % 10 + 48), fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	long		nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	ft_recnb_fd(nb, fd);
}
