/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:15:40 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 17:25:59 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	div;
	int	oct;

	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			write(1, '1', 1);
			oct = oct % div;
		}
		else
			write(1, '0', 1);
		div = div / 2;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

unsigned char 	reverse_bits(unsigned char octet)
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
