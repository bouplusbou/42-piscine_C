/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syducamp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:52:07 by syducamp          #+#    #+#             */
/*   Updated: 2018/09/01 14:52:49 by syducamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}
