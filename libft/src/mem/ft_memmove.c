/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:12:29 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

static void	*ft_rev(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char *b;

	a = (unsigned char*)dest;
	b = (const unsigned char*)src;
	while (n--)
		a[n] = b[n];
	return (a);
}

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
		dest = ft_rev(dest, src, n);
	if (dest < src)
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
