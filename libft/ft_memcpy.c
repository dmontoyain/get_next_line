/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:03:15 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 10:59:25 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char *nice;
	unsigned char *yeah;

	nice = (unsigned char *)src;
	yeah = (unsigned char *)dest;
	while (len--)
		*yeah++ = *nice++;
	return (dest);
}
