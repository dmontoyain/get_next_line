/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:03:59 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 10:59:43 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char *nice;
	unsigned char *notnice;

	nice = (unsigned char *)dst;
	notnice = (unsigned char *)src;
	while (len--)
	{
		if (*notnice == (unsigned char)c)
		{
			*nice++ = *notnice;
			return (&*nice);
		}
		*nice++ = *notnice++;
	}
	return (0);
}
