/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:44:27 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/07 12:40:02 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int	i;
	int unmatch;

	i = 1;
	unmatch = tab[0];
	while (i < length)
	{
		unmatch ^= tab[i];
		i++;
	}
	return (unmatch);
}
