/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:16:24 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *a;

	if (n > ft_strlen(s1))
		n = ft_strlen(s1);
	if (!(a = (char*)ft_memalloc(sizeof(char) * (n + 1))))
		return (NULL);
	a = ft_strncpy(a, s1, n);
	return (a);
}
