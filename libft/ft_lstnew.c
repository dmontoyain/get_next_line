/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 20:49:48 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/30 23:08:20 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nt;

	nt = (t_list*)malloc(sizeof(t_list));
	if (nt == 0)
		return (0);
	if (content == 0 || content_size == 0)
	{
		nt->content_size = 0;
		nt->content = 0;
	}
	else
	{
		nt->content_size = content_size;
		nt->content = malloc(sizeof(size_t) * nt->content_size);
		nt->content = ft_memcpy(nt->content, content, nt->content_size);
		nt->next = 0;
	}
	return (nt);
}
