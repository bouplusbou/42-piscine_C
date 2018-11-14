/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:41:57 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/07 16:44:38 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (('A' <= str[i] && str[i] <= 'J')
				|| (str[i] >= 'a' && str[i] <= 'j'))
			str[i] += 16;
		if (('K' <= str[i] && str[i] <= 'Z')
				|| (str[i] >= 'k' && str[i] <= 'z'))
			str[i] -= 10;
		i++;
	}
	return (str);
}
