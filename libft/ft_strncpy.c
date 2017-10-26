/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 17:57:31 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/27 20:18:10 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (len)
	{
		if (src[i] == '\0')
		{
			while (len--)
				dest[j++] = '\0';
			return (dest);
		}
		dest[j++] = src[i++];
		len--;
	}
	return (dest);
}
