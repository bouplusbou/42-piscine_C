#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

t_list	*ft_list_push_params(int ac, char **av);
void 	ft_list_foreach(t_list *begin_list, void (*f)(char *));

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
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	t_list *list;
	void	(*f)(char *);

	f = &ft_putstr;
	list = NULL;
	list = ft_list_push_params(ac, av);
	print_list(list);
	ft_list_foreach(list, f);
	return (0);
}
