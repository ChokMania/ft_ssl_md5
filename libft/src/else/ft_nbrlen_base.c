/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:09:51 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "else.h"

size_t	ft_nbrlen_base(long nb, unsigned int base)
{
	size_t	len;

	len = 0;
	if (base < 2 || base > 36)
		return (0);
	if (nb < 0 && nb <= -(int)base)
	{
		nb = (nb / base) * -1;
		len = 2;
	}
	else if (nb < 0)
	{
		nb = -nb;
		len = 1;
	}
	while (nb >= base)
	{
		nb = nb / base;
		len++;
	}
	return (len + 1);
}
