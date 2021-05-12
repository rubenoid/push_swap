#include "header.h"

/*
**	Put input on stack a
*/
void	parse_numbers(char **av, t_stack **a, int ac, int i)
{
	while (i < ac)
	{
		insert_end(a, ft_atoi(av[i]));
		i++;
	}
}

/*
**	Set int i and int verbose values depending on presence of -v argument
*/
void	verbose_on_off(int *i, int *verbose, char **av)
{
	if (!ft_strncmp("-v", av[1], 3))
	{
		*i = 2;
		*verbose = 1;
	}
	else
	{
		*i = 1;
		*verbose = 0;
	}
}
