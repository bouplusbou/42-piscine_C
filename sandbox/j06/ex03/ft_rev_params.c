/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:15:39 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/05 16:15:49 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//suppr
#include <unistd.h>

void	ft_putchar(char c);

//suppr
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	a = argc - 1;
	printf("argc: %d\n a: %d\n", argc, a);
	while(a != 0)
	{
		while(argv[a][i])
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		a--;
		i = 0;
	}
	return (0);
}
