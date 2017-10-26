/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 00:34:21 by dmontoya          #+#    #+#             */
/*   Updated: 2017/10/01 23:05:20 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*whatever;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s && f)
	{
		whatever = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (whatever == 0)
			return (0);
		while (s[j] != '\0')
		{
			whatever[i++] = f(j, (char)s[j]);
			j++;
		}
		whatever[i] = (char)0;
		return (whatever);
	}
	return (0);
}
