/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 03:48:38 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/13 21:33:59 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		tmp = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0' && i < len)
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return ((char*)&haystack[tmp]);
		i = tmp;
		if (haystack[i] != '\0')
			i++;
	}
	return (NULL);
}
