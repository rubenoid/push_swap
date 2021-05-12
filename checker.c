#include "header.h"

void	deallocate_and_terminate(t_stack **a, t_stack **b, char *s)
{
	deallocate(a);
	deallocate(b);
	terminate(s);
}

int	parse_input(char *line, t_stack **a, t_stack **b, int verbose)
{
	if (!ft_strncmp(line, "sa", 3))
		sa_swap(*a, *b, 0, verbose);
	else if (!ft_strncmp(line, "sb", 3))
		sb_swap(*a, *b, 0, verbose);
	else if (!ft_strncmp(line, "ss", 3))
		ss_swap(*a, *b, 0, verbose);
	else if (!ft_strncmp(line, "ra", 3))
		ra_rotate_up(a, b, 0, verbose);
	else if (!ft_strncmp(line, "rb", 3))
		rb_rotate_up(a, b, 0, verbose);
	else if (!ft_strncmp(line, "rr", 3))
		rr_rotate_up(a, b, 0, verbose);
	else if (!ft_strncmp(line, "rra", 4))
		rra_rotate_down(a, b, 0, verbose);
	else if (!ft_strncmp(line, "rrb", 4))
		rrb_rotate_down(a, b, 0, verbose);
	else if (!ft_strncmp(line, "rrr", 4))
		rrr_rotate_down(a, b, 0, verbose);
	else if (!ft_strncmp(line, "pb", 3))
		pb_push_to_b(a, b, 0, verbose);
	else if (!ft_strncmp(line, "pa", 3))
		pa_push_to_a(a, b, 0, verbose);
	else
		return (1);
	return (0);
}

int	get_input(t_stack **a, t_stack **b, int verbose)
{
	int		ret;
	char	*line;

	while (1)
	{
		ret = get_next_line(0, &line);
		if (ret == 0)
		{
			free(line);
			break ;
		}
		if (parse_input(line, a, b, verbose))
		{
			free(line);
			deallocate(a);
			deallocate(b);
			write(2, "Error\n", 6);
			return (1);
		}
		if (ret == -1)
			deallocate_and_terminate(a, b, "GET NEXT LINE ERROR\n");
		free(line);
	}
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
	if (get_input(&a, &b, verbose))
		return (1);
	if (!is_ok(a, b, count(a)))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	deallocate(&a);
	deallocate(&b);
	return (0);
}
