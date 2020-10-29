/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:13:50 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int a;

	a = (long)nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		a = -a;
	}
	if (a < 10)
		ft_putchar_fd('0' + (int)a, fd);
	if (a >= 10)
	{
		ft_putnbr_fd((int)(a / 10), fd);
		ft_putchar_fd('0' + (int)(a % 10), fd);
	}
}
