/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:05:40 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/05 16:41:30 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int a;

	i = 0;
	a = 1;
	(void)argc;
	while (argv[a])
	{
		i = 0;
		while (argv[a][i])
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
