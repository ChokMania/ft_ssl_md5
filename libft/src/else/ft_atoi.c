/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:49:41 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "else.h"

int		ft_atoi(const char *s)
{
	size_t	len;
	int		nb;
	int		neg;

	nb = 0;
	neg = 1;
	len = 0;
	while (*s && (ft_isspace(*s) || (*s == '+' && ft_isdigit(s[1])) ||
		(*s == '-' && ft_isdigit(s[1]))))
		if (*(s++) == '-')
			neg = -1;
	if (!ft_isdigit(*s))
		return (0);
	while (*s == '0')
		s++;
	while (ft_isdigit(s[len]))
		len++;
	if (len > 10)
		return (neg == 1 ? -1 : 0);
	while (ft_isdigit(*s))
		nb = (nb * 10) + (*(s++) - '0') * neg;
	return (nb);
}
