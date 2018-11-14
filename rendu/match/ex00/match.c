/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 09:38:21 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/09 15:42:25 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (s1[0] == s2[0] && s1[0] == '\0')
		return (1);
	if (s1[0] == s2[0] && s1[0] != '*')
		return (match(&s1[1], &s2[1]));
	if (s1[0] == '*' && s2[0] == '*')
		return (match(&s1[1], &s2[0]));
	if (s1[0] == '\0' && s2[0] == '*')
		return (match(&s1[0], &s2[1]));
	if (s1[0] != '\0' && s2[0] == '*')
		return (match(&s1[0], &s2[1]) || match(&s1[1], &s2[0]));
	return (0);
}