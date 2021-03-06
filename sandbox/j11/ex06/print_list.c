#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);

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
	t_list *list;

	list = NULL;
	if (ac > 1)
		list = ft_list_push_params(ac, av);
	print_list(list);
	ft_list_clear(&list);
	print_list(list);
	return (0);
}
