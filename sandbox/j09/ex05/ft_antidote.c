/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:57:58 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/07 10:21:28 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_antidote(int i, int j, int k)
{
	if ((i <= j && j <= k) || (k <= j && j <= i))
		return (j);
	if ((j <= i && i <= k) || (k <= i && i <= j))
		return (i);
	else
		return (k);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		printf("%d\n", ft_antidote(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
	return (0);
}
