int		*rrange(int b, int e)
{
	int	*tab;
	int	i;
	int size;

	i = 0;
	if (b < e)
		size = e - b + 1;
	else
		size = b - e + 1;
	tab = (int*)malloc(sizeof(int) * (size));
	if (b < e)
	{
		while (i < size)
		{
			tab[i] = e;
			e--;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			tab[i] = e;
			e++;
			i++;
		}
	}
	return (tab);
}

int		main()
{
	printf("%d\n", rrange(0, -3)[0]);
	printf("%d\n", rrange(0, -3)[1]);
	printf("%d\n", rrange(0, -3)[2]);
	printf("%d\n", rrange(0, -3)[3]);
	return (0);
}
