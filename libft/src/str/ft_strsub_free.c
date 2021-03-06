/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:23:24 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strsub_free(char **s, size_t start, size_t len)
{
	size_t	i;
	char	*a;

	if (!s || !(*s) || start + len > ft_strlen(*s) ||
		!(a = (char*)ft_memalloc(len + 1)))
		return (NULL);
	i = 0;
	while (*s[start] && i < len)
		a[i++] = *s[start++];
	ft_strdel(s);
	return (a);
}
