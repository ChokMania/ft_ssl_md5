/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:09:33 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "else.h"

double		ft_pow_double(double x, double y)
{
	double a;

	a = x;
	if ((int)y == 0)
		return (1);
	if ((int)x == 1 || (int)x == 0 || (int)y == 1)
		return (x);
	while (y > 1)
	{
		x = x * a;
		y--;
	}
	return (x);
}

ssize_t		ft_pow(ssize_t x, ssize_t y)
{
	ssize_t a;

	a = x;
	if ((int)y == 0)
		return (1);
	if ((int)x == 1 || (int)x == 0 || (int)y == 1)
		return (x);
	while (y > 1)
	{
		x = x * a;
		y--;
	}
	return (x);
}
