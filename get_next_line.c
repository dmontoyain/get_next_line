/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 01:52:35 by dmontoya          #+#    #+#             */
/*   Updated: 2017/11/03 14:00:51 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	save(char **temp, char *buf, int i, int ret)
{
	if (i == ret)
	{
		if (temp != 0)
			ft_strdel(temp);
		return ;
	}
	*temp = ft_strsub(buf, i, ret - i);
}

int		found_nl(char **line, char **temp, char *buf, int i)
{
	char *temp2;
	char *temp3;

	if (buf[i] != '\n')
		return (-1);
	if (!*line)
		*line = ft_strsub(buf, 0, i);
	else
	{
		temp2 = ft_strsub(buf, 0, i);
		temp3 = *line;
		*line = ft_strjoin(*line, temp2);
		ft_strdel(&temp2);
		ft_strdel(&temp3);
	}
	save(temp, buf, i + 1, ft_strlen(buf));
	return (1);
}

void	save_and_cont(char **line, char *buf, int ret)
{
	char *temp2;
	char *temp3;

	if (!*line)
		*line = ft_strsub(buf, 0, ret);
	else
	{
		temp3 = *line;
		temp2 = ft_strsub(buf, 0, ret);
		*line = ft_strjoin(*line, temp2);
		ft_strdel(&temp2);
		ft_strdel(&temp3);
	}
}

int		checktemp(char **temp, char **line, int ret)
{
	int i;

	i = -1;
	if (ret == 0)
		return (1);
	while (temp[0][++i] != '\0')
	{
		if (temp[0][i] == '\n')
		{
			*line = ft_strsub(*temp, 0, i);
			save(temp, *temp, i + 1, ft_strlen(*temp));
			return (1);
		}
		if (temp[0][i + 1] == '\0' && ret == 0)
		{
			*line = ft_strdup(*temp);
			return (1);
		}
	}
	*line = ft_strdup(*temp);
	ft_strdel(temp);
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static	char	*temp;
	int				i;
	int				ret;

	if (fd < 0 || !line)
		return (-1);
	*line = ft_strnew(0);
	if (temp != 0)
		if (checktemp(&temp, line, 1) == 1)
			return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		i = -1;
		buf[ret] = '\0';
		while (++i < ret)
			if (found_nl(line, &temp, buf, i) == 1)
				return (1);
		save_and_cont(line, buf, ret);
	}
	if (ret < 0)
		return (-1);
	if (checktemp(&temp, line, ret) == 1 && ft_strlen(*line) > 0)
		return (1);
	return (0);
}
