#include "header.h"

int	sorting_and_deallocate(t_stack **a, t_stack **b, int verbose)
{
	sort(a, b, verbose);
	deallocate(a);
	deallocate(b);
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		i;
	int		verbose;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !ft_strncmp(av[1], "-v", 3)))
		return (0);
	verbose_on_off(&i, &verbose, av);
	if (check_input(ac - i, av + i))
		return (1);
	parse_numbers(av, &a, ac, i);
	if (check_doubles(&a))
		return (1);
	if (!is_ok(a, b, count(a)))
	{
		deallocate(&a);
		return (0);
	}
	return (sorting_and_deallocate(&a, &b, verbose));
}
