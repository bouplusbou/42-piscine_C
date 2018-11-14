#include <stdio.h>
#include <stdlib.h>

char	mirrorator(char c)
{
	char	*alphmin = "abcdefghijklmnopqrstuvwxyz";
	char	*revmin = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	i = 0;
	while (alphmin[i])
	{
		if (c == alphmin[i])
			return (revmin[i]);
		i++;
	}
	return ('r');
}

char	*mirror(char *str)
{
	char	*res;
	int		l;
	int i;

	l = 0;
	i = 0;
	while (str[l])
		l++;
	res = (char*)malloc(sizeof(char) * (l + 1));
	while (str[i])
	{
		res[i] = mirrorator(str[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

int		main(int c, char **v)
{
	printf("%s\n", mirror(v[1]));
	return (0);
}
