/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 22:34:48 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/16 22:34:54 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		find_size(char **stack)
{
	int		size;

	size = 0;
	while (stack[size])
		size++;
	return (size);
}

char	*t_s(char **stack)
{
	int		i;
	char	*cpy;

	i = 0;
	while (stack[i + 1])
		i++;
	cpy = ft_strdup(stack[i]);
	return (cpy);
}

char	*de_stack(char ***stack)
{
	int		i;
	char	*cpy;

	i = 0;
	while ((*stack)[i + 1])
		i++;
	cpy = ft_strdup((*stack)[i]);
	(*stack)[i] = NULL;
	return (cpy);
}

void	add_stack(char ***stack, char *elem)
{
	int		i;

	i = 0;
	while ((*stack)[i])
		i++;
	(*stack)[i] = ft_strdup(elem);
}
