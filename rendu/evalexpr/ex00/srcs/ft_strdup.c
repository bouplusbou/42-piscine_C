/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 22:32:47 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/16 22:32:49 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (!src)
		return (NULL);
	if (!(dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
