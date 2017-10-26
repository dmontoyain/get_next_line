/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 21:52:47 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 16:50:18 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*news;
	size_t	i;

	i = 0;
	news = (char *)malloc(sizeof(char) * (size + 1));
	if (news == NULL)
		return (0);
	ft_memset(news, '\0', size + 1);
	return (news);
}
