/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:17:39 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_strstr(const char *s1, const char *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!*s)
		return ((char*)((size_t)s1));
	len = ft_strlen(s);
	while (s1[i])
	{
		if (s1[i] == *s)
			if (ft_strncmp(&s1[i], s, len) == 0)
				return ((char*)((size_t)&s1[i]));
		i++;
	}
	return (NULL);
}
