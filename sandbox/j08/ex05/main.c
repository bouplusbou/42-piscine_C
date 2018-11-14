#include "ft_stock_par.h"

int		main(int c, char **v)
{
	struct	s_stock_par *s;

	s = ft_param_to_tab(c, v);
	ft_show_tab(s);
	return (0);
}
