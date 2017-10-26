/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 02:04:59 by dmontoya          #+#    #+#             */
/*   Updated: 2017/10/01 22:51:28 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lt;
	char	*ns;
	int		i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	lt = ft_strlen(s1) + ft_strlen(s2) + 1;
	ns = (char *)malloc(sizeof(char) * lt);
	if (ns == 0)
		return (0);
	while (lt--)
	{
		while (*s1)
			ns[i++] = *s1++;
		while (*s2)
			ns[i++] = *s2++;
	}
	ns[i] = (char)0;
	return (ns);
}
