#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list *list)
{
	while (list)
	{
		printf("[%s]->", list->data);
		list = list->next;
	}
	printf("NULL\n");
}


int		main()
{
	t_list *list;

	list = ft_create_elem("coucou");
	print_list(list);
	return (0);
}
