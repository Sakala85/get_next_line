/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 00:25:37 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/13 16:03:09 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char const	*str;
	size_t				i;

	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return ((unsigned char*)s);
		str++;
		s++;
		i++;
	}
	return (NULL);
}
