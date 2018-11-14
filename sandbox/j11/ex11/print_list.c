#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

t_list	*ft_list_push_params(int ac, char **av);
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

void	print_list(t_list *list)
{
	while (list)
	{
		printf("[%s]->", list->data);
		list = list->next;
	}
	printf("NULL\n");
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
	int		(*cmp)(char *, char *);

	cmp = &ft_strcmp;
	list = NULL;
	list = ft_list_push_params(ac, av);
	print_list(list);
	if (ft_list_find(list, "coucou", cmp))
		printf("list_find : [%s]\n", ft_list_find(list, "coucou", cmp)->data);
	return (0);
}
