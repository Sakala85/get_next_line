/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 06:51:31 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/13 16:54:07 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;
	int		k;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	len = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while ((s[len] == ' ' || s[len] == '\t' || s[len] == '\n') && (len > i))
		len--;
	if (!(str = malloc(sizeof(char) * (ft_strlen(s) - i - (ft_strlen(s) - len)
						+ 2))))
		return (NULL);
	while (i <= len)
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
