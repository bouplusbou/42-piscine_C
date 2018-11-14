#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

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
	list = ft_list_push_params(ac, av);
	print_list(list);
	if (ft_list_at(list, 1))
		printf("list_at: [%s]\n", ft_list_at(list, 1)->data);
	return (0);
}
