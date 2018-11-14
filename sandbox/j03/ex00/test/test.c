void	print(char c)
{
	write(1, &c, 1);
}

int	main ()
{
	char	*ptr;
	char	a;

	a = 3;
	ptr = &a;
	print(*ptr);
	return (0);
}
