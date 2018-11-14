#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);

void	print_list(t_list *list)
{
	while (list)
	{
		printf("[%s]->", list->data);
		list = list->next;
	}
	printf("NULL\n");
}

int		main(int ac, char **av)
{
	print_list(ft_list_push_params(ac, av));
	return (0);
}
