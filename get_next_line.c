/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:35:46 by mbengtss          #+#    #+#             */
/*   Updated: 2018/08/08 15:14:24 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int					ft_check_gnl(char **line, char *buf)
{
	int						i;
	int						j;
	char					*tmp;

	i = 0;
	j = 1;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] != '\n')
		j = 0;
	tmp = ft_strnew(ft_strlen(*line) + i);
	ft_strcpy(tmp, *line);
	ft_strncat(tmp, buf, i);
	free(*line);
	ft_strcpy(buf, &buf[i + j]);
	*line = tmp;
	return (j);
}

int							get_next_line(const int fd, char **line)
{
	int						i;
	static char				buf[MAX_FD][BUFF_SIZE + 1];

	if (fd < 0 || !line || (read(fd, &i, 0)) == -1)
		return (-1);
	i = 0;
	*line = NULL;
	if (ft_check_gnl(line, buf[fd]) == 1)
		return (1);
	while ((i = read(fd, buf[fd], BUFF_SIZE)) > 0)
	{
		buf[fd][i] = '\0';
		if (ft_check_gnl(line, buf[fd]) == 1)
			return (1);
	}
	if (**line != '\0')
		return (1);
	return (0);
}
