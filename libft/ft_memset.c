/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:02:13 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 10:39:22 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *whatever;

	whatever = (unsigned char *)b;
	while (len > 0)
	{
		*whatever = (unsigned char)c;
		if (len)
			whatever++;
		len--;
	}
	return (b);
}
