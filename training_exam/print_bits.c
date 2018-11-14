/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:45:02 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 16:52:41 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	oct;
	int	div;

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
		div = div / 2
	}
}
