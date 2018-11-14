#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);
int		ft_list_size(t_list *begin_list);


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
	ft_list_push_front(&list, "front");
	print_list(list);
	printf("%d\n", ft_list_size(list));
	return (0);
}
