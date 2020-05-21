/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 02:34:10 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/13 15:56:25 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*ptr;

	ptr = NULL;
	a = (char)c;
	while (*s)
	{
		if (*s == c)
			ptr = (char*)s;
		s++;
	}
	if (ptr != NULL)
		return (ptr);
	else if (*s == c)
		return ((char*)s);
	else
		return (NULL);
}
