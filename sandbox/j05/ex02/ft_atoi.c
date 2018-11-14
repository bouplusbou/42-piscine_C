/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:22:48 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/03 13:49:29 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//suppr
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		result;
	int		neg;

	i = 0;
	result = 0;
	neg = 0;
	//skip les whitespaces et les ispaces (char ASCII de 9 a 13)
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	//si nb negatif alors flag neg
	if (str[i] == '-')
		neg = 1;
	//si signe positif ou negatif, skip
	if (str[i] == '-' || str[i] == '+')
		i++;
	//si le char juste apres est l'ASCII entre '0' et '9, le transformer en int
	while (str[i] >= '0' && str[i] <= '9')
	{
		//(premiere fois => juste zero) on prend le res trouve en dessous et on multiplie par 10
		result *= 10;
		//transformation du char en int et incrementation du res
		result += str[i] - '0';
		i++;
	}
	if (neg > 0)
		result = -result;
	return (result);
}

//suppr
int		main(void)
{
	printf("%d\n", ft_atoi(" \t\v\n\r\f--123"));
	printf("%d\n", atoi(" \t\v\n\r\f--123"));
	printf("%d\n", ft_atoi(" \t\v\n\r\f-123"));
	printf("%d\n", atoi(" \t\v\n\r\f-123"));
	return (0);
}
