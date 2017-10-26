/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:08:06 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 10:36:48 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *append)
{
	size_t len;
	size_t j;

	len = ft_strlen(dest);
	j = 0;
	while (append[j] != '\0')
		dest[len++] = append[j++];
	dest[len] = '\0';
	return (dest);
}
