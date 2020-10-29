/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:15:49 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

size_t	ft_strlcat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t j;

	j = 0;
	j = ft_strlen(s1);
	while (*s2 && j + 1 < n)
		s1[j++] = *(s2++);
	s1[j] = '\0';
	return (ft_strlen(s2) + (ft_strlen(s1) > n ? n : ft_strlen(s1)));
}
