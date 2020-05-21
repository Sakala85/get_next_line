/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:23:41 by mbengtss          #+#    #+#             */
/*   Updated: 2018/04/10 09:19:19 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char const	*tmpsrc;
	unsigned char		*tmpdst;

	tmpsrc = (unsigned char*)src;
	tmpdst = (unsigned char*)dest;
	i = 0;
	if (n < 1 || dest == src)
		return (NULL);
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		if (tmpsrc[i] == (unsigned char)c)
			return (dest + 1);
		dest++;
		i++;
	}
	return (NULL);
}
