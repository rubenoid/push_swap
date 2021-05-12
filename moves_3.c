#include "header.h"

void	ss_swap(t_stack *a, t_stack *b, int print, int verbose)
{
	swap(a);
	swap(b);
	if (print)
		write(1, "ss\n", 3);
	if (verbose)
		print_stacks(a, b);
}

void	sb_swap(t_stack *a, t_stack *b, int print, int verbose)
{
	swap(b);
	if (print)
		write(1, "sb\n", 3);
	if (verbose)
		print_stacks(a, b);
}

void	sa_swap(t_stack *a, t_stack *b, int print, int verbose)
{
	swap(a);
	if (print)
		write(1, "sa\n", 3);
	if (verbose)
		print_stacks(a, b);
}

void	pa_push_to_a(t_stack **a, t_stack **b, int print, int verbose)
{
	if (*b != NULL)
		(*b)->pol *= -1;
	push_to_other(b, a);
	if (print)
		write(1, "pa\n", 3);
	if (verbose)
		print_stacks(*a, *b);
}

void	pb_push_to_b(t_stack **a, t_stack **b, int print, int verbose)
{
	if (*a != NULL)
		(*a)->pol *= -1;
	push_to_other(a, b);
	if (print)
		write(1, "pb\n", 3);
	if (verbose)
		print_stacks(*a, *b);
}
