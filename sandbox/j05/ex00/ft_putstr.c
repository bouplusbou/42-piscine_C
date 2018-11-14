/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 16:54:01 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/02 20:24:15 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// suppr
#include <unistd.h>


void	ft_putchar(char c);

// suppr
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

//suppr
int		main(void)
{
	ft_putstr("coucou");
	return (0);
}
