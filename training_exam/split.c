/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:39:55 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/20 18:11:54 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

int		count_words(char *s)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (!is_whitespace(s[i]) && is_whitespace(s[i - 1]))
			w++;
		i++;
	}
	return (w);
}

char	*malloc_word(char *s)
{
	int	size;
	int	i;
	char *word;

	size = 0;
	while (!is_whitespace(s[size]))
		size++;
	if(!(word = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	while (!is_whitespace(s[i]))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char 	**split(char *s)
{
	int	i;
	int	j;
	char **tab;

	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (count_words(s) + 1))))
		return (0);
	while (s[i])
	{
		if (!is_whitespace(s[i]) && is_whitespace(s[i - 1]))
		{
			tab[j] = malloc_word(s + i);
			j++;
		}
		i++;
	}
	return (tab);
}

int	main(int ac, char **av)
{
	printf("%s", split(av[1])[13]);
	return (0);
}
