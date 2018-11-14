#include <stdio.h>

int		is_powof2(int nb)
{
	while (nb % 2 == 0)
		nb = nb / 2;
	if (nb == 1)
		return (1);
	else
		return (0);
}

int		main(int c, char **v)
{
	printf("%d\n", is_powof2(0));
	printf("%d\n", is_powof2(6));
	return (0);
}
