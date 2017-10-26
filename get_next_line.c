/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 17:14:04 by dmontoya          #+#    #+#             */
/*   Updated: 2017/10/25 19:44:01 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*save_rest(char *temp, char *buf, int i)
{
	free(temp);
	temp = ft_strsub(buf, i, BUFF_SIZE - i);
	return (temp);
}

int		found_newline(char **line, char **temp, char **buf, int i)
{
	if (!*line)
	{
		if (*temp != 0)
		{
			*line = ft_strjoin(*temp, ft_strsub(*buf, 0, i));
			free(*temp);
		}
		else
			*line = ft_strsub(*buf, 0, i);
	}
	else
		*line = ft_strjoin(*line, ft_strsub(*buf, 0, i));
	if (i + 1 != BUFF_SIZE)
		*temp = save_rest(*temp, *buf, i + 1);
	free(*buf);
	return (1);
}

void	save_n_continue(char **line, char **temp, char *buf)
{
	if (!*line)
	{
		if (*temp != 0)
		{
			*line = ft_strjoin(*temp, buf);
			free(*temp);
		}
		else
			*line = ft_strdup(buf);
	}
	else
		*line = ft_strjoin(*line, buf);
}

int		checktemp(char **temp, char **line)
{
	int i;
	int tlen;

	i = -1;
	tlen = ft_strlen(*temp);
	if (!*temp)
		return (0);
	while (temp[0][++i] != '\0')
	{
		if (temp[0][i] == '\n')
		{
			*line = ft_strsub(*temp, 0, i);
			*temp = ft_strsub(*temp, i + 1, tlen - (i + 1));
			return (1);
		}
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	char			*buf;
	static	char	*temp;
	int				i;

	if (!fd || !line || BUFF_SIZE == 0)
		return (-1);
	if (temp != 0)
		if (checktemp(&temp, line) == 1)
			return (1);
	buf = (char *)malloc(sizeof(char) * BUFF_SIZE);
	read(fd, buf, BUFF_SIZE);
	i = -1;
	while (++i < BUFF_SIZE)
	{
		if (buf[i] == '\n')
			return (found_newline(line, &temp, &buf, i));
		if (i + 1 == BUFF_SIZE)
		{
			save_n_continue(line, &temp, buf);
			read(fd, buf, BUFF_SIZE);
			i = -1;
		}
	}
	return (1);
}






