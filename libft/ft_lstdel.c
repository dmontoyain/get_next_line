/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 21:43:15 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/30 23:02:07 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*temp;

	lst = *alst;
	while (lst)
	{
		temp = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = temp;
	}
	*alst = NULL;
}
