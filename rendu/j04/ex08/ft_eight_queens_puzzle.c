/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 18:22:42 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/02 19:25:25 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_printsolution(int i)
{
	if (i == 92)
		return (92);
	ft_printsolution(ft_printsolution(i + 1));
	return (92);
}

int		ft_eight_queens_puzzle(void)
{
	int	i;

	i = 0;
	return (ft_printsolution(i));
}
