/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:25:08 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strjoin_free(char **s1, char **s2, int f)
{
	char	*a;
	char	*tmp;
	size_t	i;

	if (!s1 || !s2 || !(*s1) || !(*s2))
		return (NULL);
	i = ft_strlen(*s1);
	tmp = *s2;
	if (!(a = (char*)ft_memalloc(sizeof(char) * (i + ft_strlen(*s2) + 1))))
		return (NULL);
	a = ft_memcpy(a, *s1, i + 1);
	while (*tmp)
		a[i++] = *(tmp++);
	a[i] = '\0';
	if (f == 1 || f == 3)
		ft_strdel(s1);
	if (f == 2 || f == 3)
		ft_strdel(s2);
	return (a);
}
