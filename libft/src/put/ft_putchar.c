/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:13:20 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

void	ft_putchar(int c)
{
	size_t	len;
	char	*a;

	len = ft_unicode_len(c);
	if (len > 1)
	{
		if (!(a = (char*)ft_memalloc(sizeof(char) * (len + 1))))
			return ;
		a = ft_unicode(a, c);
		write(1, a, len);
	}
	else
		write(1, &c, 1);
}
