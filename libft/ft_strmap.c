/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 00:22:30 by dmontoya          #+#    #+#             */
/*   Updated: 2017/10/01 23:04:46 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*whatever;
	int		i;

	i = 0;
	if (str && f)
	{
		whatever = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
		if (whatever == 0)
			return (0);
		while (*str)
		{
			whatever[i++] = f(*str);
			str++;
		}
		whatever[i] = (char)0;
		return (whatever);
	}
	return (0);
}
