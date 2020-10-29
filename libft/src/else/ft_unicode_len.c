/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unicode_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:10:09 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "else.h"

size_t	ft_unicode_len(int c)
{
	size_t octet;

	octet = 1;
	if (c > 127)
		octet++;
	if (c > 2047)
		octet++;
	if (c > 65535)
		octet++;
	if (c > 2097151)
		octet++;
	if (octet == 0)
		octet = 1;
	return (octet);
}
