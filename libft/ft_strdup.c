/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:31:44 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/27 20:27:04 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*newstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	newstr = (char *)malloc(sizeof(char) * (ft_strlen((char *)str) + 1));
	if (newstr == NULL)
		return (0);
	while (str[i] != '\0')
		newstr[j++] = str[i++];
	newstr[j] = '\0';
	return (newstr);
}
