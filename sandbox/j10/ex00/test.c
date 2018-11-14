int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

int		main()
{
	if(ft_strcmp("o", "o") == 0)
		ft_putstr("It works !\n");
	return (0);
}

// pour utiliser la lib :
// gcc test.c -L. -lft
