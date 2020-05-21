/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 02:43:40 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/21 15:27:14 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int			i;
	int			j;
	int			tmp;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		tmp = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0')
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
