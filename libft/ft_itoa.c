/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 21:00:42 by dmontoya          #+#    #+#             */
/*   Updated: 2017/10/01 22:24:02 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_itostr(char *ns, int nb, int size, int is_neg)
{
	ns[size] = '\0';
	while (size--)
	{
		if (size == 0 && is_neg == 1)
		{
			ns[0] = '-';
			break ;
		}
		ns[size] = nb % 10 + '0';
		nb = nb / 10;
	}
}

char			*ft_itoa(int nb)
{
	int		size;
	char	*ns;
	int		is_neg;

	is_neg = 0;
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_intlen(nb);
	ns = (char *)malloc(sizeof(char) * (size + 1));
	if (ns == 0)
		return (0);
	if (nb < 0)
	{
		is_neg = 1;
		nb = -nb;
	}
	ft_itostr(ns, nb, size, is_neg);
	return (ns);
}
