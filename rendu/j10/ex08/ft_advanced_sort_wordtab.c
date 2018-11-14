/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:02:58 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/18 09:46:37 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		l;
	char	*tmp;

	l = 0;
	while (tab[l])
		l++;
	i = 0;
	while (i < l - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
			i = -1;
		}
		i++;
	}
}
