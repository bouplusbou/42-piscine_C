/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:58:57 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/17 21:24:29 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>
# include <stdio.h>

typedef struct	s_calculator
{
	char	operator;
	int		(*function)(int, int);
}				t_calculator;

int				ft_atoi(char *str);
int				ft_add(int i, int j);
int				ft_sub(int i, int j);
int				ft_mul(int i, int j);
int				ft_div(int i, int j);
int				ft_mod(int i, int j);
void			ft_putnbr(int i);
void			ft_putstr(char *str);
void			ft_putchar(char c);
int				ft_strcmp(char *s1, char *s2);
int				is_error(int c, char **v);

#endif
