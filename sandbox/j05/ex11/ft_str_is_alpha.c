/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:11:02 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/04 16:44:19 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[l])
		l++;
	if (l == 0)
		return (1);
	while (str[i])
	{
//		si le char est different de a-z ou A-Z, return 0
		if (!(('a' <= str[i] && str[i] <= 'z')
			|| ('A' <= str[i] && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);

}

int		main()
{
	char	str[] = "";
	char	str1[] = "fdskBJBJjnfdJKNKJsljnfkjdsf";
	char	str2[] = "fdsgi2iuh32h";
	char	str3[] = " fgfsdggdf";
	char	str4[] = "fdgfdgfd;fdgfds";

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	printf("%d\n", ft_str_is_alpha(str4));
	return (0);
}
