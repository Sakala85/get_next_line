/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 05:56:46 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/13 16:10:38 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fs;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(fs = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		fs[i] = f(*s);
		s++;
		i++;
	}
	fs[i] = '\0';
	return (fs);
}
