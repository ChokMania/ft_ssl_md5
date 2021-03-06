/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sha224.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@42.student.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 12:40:59 by judumay           #+#    #+#             */
/*   Updated: 2020/10/28 14:56:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHA224_H
# define FT_SHA224_H

# include "ft_sha256.h"

/*
**	ft_sha224.c
*/

char				*ft_sha224(char *src, size_t size, int vb);

#endif
