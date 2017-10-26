/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 02:32:34 by dmontoya          #+#    #+#             */
/*   Updated: 2017/10/01 22:52:25 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_locateend(char const *s, int len)
{
	int	location;

	location = 0;
	while (len--)
	{
		if (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
			location++;
		else
			return (location);
	}
	return (location);
}

static	int		ft_locatestart(char const *s)
{
	int	location;

	location = 0;
	while (*s)
	{
		if (*s == ' ' || *s == '\n' || *s == '\t')
			location++;
		else
			return (location);
		s++;
	}
	return (location);
}

char			*ft_strtrim(char const *s)
{
	char	*ns;
	int		tl;
	int		len;
	int		b;
	int		i;

	i = 0;
	if (s == 0)
		return (0);
	b = ft_locatestart(s);
	len = ft_strlen(s);
	if (len == b)
		tl = 0;
	else
		tl = len - b - ft_locateend(s, len);
	ns = (char *)malloc(sizeof(char) * (tl + 1));
	if (ns == 0)
		return (0);
	while (tl--)
		ns[i++] = s[b++];
	ns[i] = (char)0;
	return (ns);
}
