/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 12:24:17 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/12 11:13:57 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(nbr)	nbr % 2 == 0
# define TRUE		1
# define FALSE		0
# define EVEN_MSG 	"I have an even number of arguments.\n"
# define ODD_MSG 	"I have an odd number of arguments.\n"
# define SUCCESS	0

typedef int	t_bool;

#endif
