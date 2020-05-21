/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 06:41:25 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/13 16:56:14 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		lens1;
	int		lens2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	lens1 = 0;
	lens2 = 0;
	while (s1[lens1])
		lens1++;
	while (s2[lens2])
		lens2++;
	if (!(str = (char*)malloc(sizeof(char) * (lens1 + lens2 + 1))))
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	lens2 = 0;
	while (s2[lens2])
		str[i++] = s2[lens2++];
	str[i] = '\0';
	return (str);
}
