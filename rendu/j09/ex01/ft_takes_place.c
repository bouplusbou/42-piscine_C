/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:58:42 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/07 09:30:23 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_else(int hour, int x, int y)
{
	x = hour % 12;
	y = (hour + 1) % 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d", x);
	printf(".00 P.M. AND %d.00 P.M.\n", y);
}

void	ft_takes_place(int hour)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 P.M.\n");
	else if (hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 A.M.\n");
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 P.M.\n");
	else if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 A.M.\n");
	else if (hour < 12)
	{
		x = hour;
		y = hour + 1;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d", x);
		printf(".00 A.M. AND %d.00 A.M.\n", y);
	}
	else
		ft_else(hour, 0, 0);
}
