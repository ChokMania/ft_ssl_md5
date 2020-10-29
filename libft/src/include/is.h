/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:15:02 by judumay           #+#    #+#             */
/*   Updated: 2020/10/29 11:15:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_H
# define IS_H

# include "../../libft.h"

int		ft_isalpha(int c);

int		ft_isspace(char c);

int		ft_isprint(int c);

int		ft_isalnum(int	c);

int		ft_isdigit(int	c);

int		ft_isascii(int	c);

int		ft_islower(int	c);

int		ft_isupper(int	c);

int		ft_ischar(const char *s, char c);

#endif
