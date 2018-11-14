/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 09:10:23 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/19 14:20:57 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int	i;
	t_list	*list;
	t_list	*tmp;

	if (ac <= 1)
		return (NULL);
	i = 1;
	list = ft_create_elem(av[i]);
	i++;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = list;
		list = tmp;
		i++;
	}
	return (list); // doit renvoyer quoi si aucun params ?
}
