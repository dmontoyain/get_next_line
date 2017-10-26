/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:31:50 by dmontoya          #+#    #+#             */
/*   Updated: 2017/10/25 16:45:54 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char *str[500];
	int fd;
	int i;

	i = 0;
	if (argc < 2 || argc > 2)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	while (i < 5)
	{
		get_next_line(fd, &str[i]);
		printf("result = %s\n", str[i]);
		i++;
	}
	return (0);
}
