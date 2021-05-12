#include "header.h"

void	rrb_rotate_down(t_stack **a, t_stack **b, int print, int verbose)
{
	rotate_down(b);
	if (print)
		write(1, "rrb\n", 4);
	if (verbose)
		print_stacks(*a, *b);
}

void	rra_rotate_down(t_stack **a, t_stack **b, int print, int verbose)
{
	rotate_down(a);
	if (print)
		write(1, "rra\n", 4);
	if (verbose)
		print_stacks(*a, *b);
}

void	rr_rotate_up(t_stack **a, t_stack **b, int print, int verbose)
{
	rotate_up(a);
	rotate_up(b);
	if (print)
		write(1, "rr\n", 3);
	if (verbose)
		print_stacks(*a, *b);
}

void	rb_rotate_up(t_stack **a, t_stack **b, int print, int verbose)
{
	rotate_up(b);
	if (print)
		write(1, "rb\n", 3);
	if (verbose)
		print_stacks(*a, *b);
}

void	ra_rotate_up(t_stack **a, t_stack **b, int print, int verbose)
{
	rotate_up(a);
	if (print)
		write(1, "ra\n", 3);
	if (verbose)
		print_stacks(*a, *b);
}
