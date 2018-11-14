#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data);
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

	list = NULL;
	list = ft_create_elem("coucou");
	ft_list_push_back(&list, "back");
	print_list(list);
	return (0);
}
