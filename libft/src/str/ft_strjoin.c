/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:15:41 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	if (!(a = (char*)malloc(i + ft_strlen(s2) + 1)))
		return (NULL);
	a = ft_strcpy(a, s1);
	while (*s2)
		a[i++] = *(s2++);
	a[i] = '\0';
	return (a);
}
