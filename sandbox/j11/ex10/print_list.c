#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

t_list	*ft_list_push_params(int ac, char **av);
void ft_list_foreach_if(t_list *begin_list, void (*f)(char *), void *data_ref, int (*cmp)(char *, char *));

void	print_list(t_list *list)
{
	while (list)
	{
		printf("[%s]->", list->data);
		list = list->next;
	}
	printf("NULL\n");
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	printf("\nLook what I found: \n");
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	t_list *list;
	void	(*f)(char *);
	int		(*cmp)(char *, char *);

	f = &ft_putstr;
	cmp = &ft_strcmp;
	list = NULL;
	list = ft_list_push_params(ac, av);
	print_list(list);
	ft_list_foreach_if(list, f, "coucou", cmp);
	return (0);
}
