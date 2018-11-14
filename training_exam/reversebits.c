/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:58:24 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 16:44:53 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char b)
{
	unsigned char	r;
	unsigned int	len;

	r = 0;
	len = 8;
	while (len != 0)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
		len--;
	}
	return (r);
}

int		main(void)
{
	unsigned char	c;

	c = '&';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
