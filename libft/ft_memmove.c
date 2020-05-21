/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:55:05 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/21 15:08:28 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	x;
	char	*tmp;

	s = (char *)src;
	d = (char *)dst;
	x = 0;
	tmp = (char *)malloc(sizeof(src) * len);
	if (tmp == NULL)
		return (dst);
	while (x < len)
	{
		tmp[x] = s[x];
		x++;
	}
	x = 0;
	while (x < len)
	{
		d[x] = tmp[x];
		x++;
	}
	free(tmp);
	return (dst);
}
