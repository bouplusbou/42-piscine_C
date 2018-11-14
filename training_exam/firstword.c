#include <unistd.h>

void	first(char *str)
{
	int	i;

	i = 0;
	while (str[i] < 33 || str[i] > 126)
		i++;
	while (33 <= str[i] && str[i] <= 126)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}


void	last(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i] < 33 || str[i] > 126)
		i--;
	while (33 <= str[i] && str[i] <= 126)
		i--;
	i++;
	while (33 <= str[i] && str[i] <= 126)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int c, char **v)
{
	last(v[1]);
	return (0);
}
