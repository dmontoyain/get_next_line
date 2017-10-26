/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 23:57:51 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 10:50:11 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str, const char *append, size_t n)
{
	size_t len;
	size_t i;

	len = ft_strlen(str);
	i = 0;
	while (n-- && append[i] != '\0')
		str[len++] = append[i++];
	str[len] = '\0';
	return (str);
}
