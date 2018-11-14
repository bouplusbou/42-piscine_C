/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 09:36:15 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/05 15:36:48 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//suppr
#include <unistd.h>

void	ft_putchar(char c);

// suppr
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc,char **argv)
{
	int	i;

	i = 0;
	argc = 0;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
