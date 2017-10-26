/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:08:48 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 11:11:06 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		dl;
	size_t		sl;

	i = 0;
	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	if (size <= dl)
		return (sl + size);
	while ((dest[i] != '\0') && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dl + sl);
}
