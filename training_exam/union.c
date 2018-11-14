#include <unistd.h>

int		not_seen(char *s, int maxpos, char c)
{
	int i;

	i = 0;
	while (i < maxpos)
	{
		if (c == s[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (not_seen(s1, i, s1[i]))
			write(1, &s1[i], 1);
		i++;
	}
	while (s2[j])
	{
		if (not_seen(s1, i, s2[j]) && not_seen(s2, j, s2[j]))
			write(1, &s2[j], 1);
		j++;
	}
}

int		main(int c, char **v)
{
	(void)c;
	ft_union(v[1], v[2]);
	return (0);
}
