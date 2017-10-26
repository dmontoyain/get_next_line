/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 19:46:37 by dmontoya          #+#    #+#             */
/*   Updated: 2017/10/01 22:44:18 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t temp;

	i = 0;
	j = 0;
	temp = 0;
	if (little[j] == '\0')
		return ((char*)big);
	while (big[temp] != '\0' && temp < len)
	{
		while (big[i] == little[j] && i < len)
		{
			if (little[j + 1] == '\0')
				return ((char*)&big[temp]);
			i++;
			j++;
		}
		temp++;
		i = temp;
		j = 0;
	}
	return (0);
}
