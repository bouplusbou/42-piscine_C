/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 12:23:51 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/02 17:38:51 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= (nb / i))
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
