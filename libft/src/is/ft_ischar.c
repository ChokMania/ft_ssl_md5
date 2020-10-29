/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:24:42 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is.h"

int		ft_ischar(const char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i])
		if (s[i++] == c)
			return (i - 1);
	if (s[i] == c)
		return (i);
	return (-1);
}
