#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if ((base[j] == base[i] && j != i) || (base[j] == '+' || base[j] == '-'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (!base_is_valid(base))
		return;
	while (base[i])
		i++;
	if (i <= 1)
		return;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	nb = nbr;
	if (nb / i)
		ft_putnbr_base((nb / i), base);
	ft_putchar(base[nb % i]);
}

int		main(int c, char **v)
{
	ft_putnbr_base(atoi(v[1]), v[2]);
	return (0);
}

