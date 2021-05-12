#include "header.h"

void	sort_a_one_three_two_a(t_stack **a, t_stack **b, int verbose)
{
	(*a)->pol = 0;
	(*a)->next->pol = 0;
	(*a)->next->next->pol = 0;
	if (count(*a) == 3)
	{
		sa_swap(*a, *b, 1, verbose);
		ra_rotate_up(a, b, 1, verbose);
	}
	else
	{
		ra_rotate_up(a, b, 1, verbose);
		sa_swap(*a, *b, 1, verbose);
		rra_rotate_down(a, b, 1, verbose);
	}
}

void	sort_a_two_one_three_a(t_stack **a, t_stack **b, int verbose)
{
	(*a)->pol = 0;
	(*a)->next->pol = 0;
	(*a)->next->next->pol = 0;
	sa_swap(*a, *b, 1, verbose);
}

void	sort_a_two_three_one(t_stack **a, t_stack **b, int verbose)
{
	(*a)->pol = 0;
	(*a)->next->pol = 0;
	(*a)->next->next->pol = 0;
	if (count(*a) == 3)
		rra_rotate_down(a, b, 1, verbose);
	else
	{
		ra_rotate_up(a, b, 1, verbose);
		sa_swap(*a, *b, 1, verbose);
		rra_rotate_down(a, b, 1, verbose);
		sa_swap(*a, *b, 1, verbose);
	}
}

void	sort_a_three_one_two(t_stack **a, t_stack **b, int verbose)
{
	(*a)->pol = 0;
	(*a)->next->pol = 0;
	(*a)->next->next->pol = 0;
	if (count(*a) == 3)
		ra_rotate_up(a, b, 1, verbose);
	else
	{
		sa_swap(*a, *b, 1, verbose);
		ra_rotate_up(a, b, 1, verbose);
		sa_swap(*a, *b, 1, verbose);
		rra_rotate_down(a, b, 1, verbose);
	}
}

void	sort_a_three_two_one(t_stack **a, t_stack **b, int verbose)
{
	(*a)->pol = 0;
	(*a)->next->pol = 0;
	(*a)->next->next->pol = 0;
	if (count(*a) == 3)
	{
		ra_rotate_up(a, b, 1, verbose);
		sa_swap(*a, *b, 1, verbose);
	}
	else
	{
		sa_swap(*a, *b, 1, verbose);
		ra_rotate_up(a, b, 1, verbose);
		sa_swap(*a, *b, 1, verbose);
		rra_rotate_down(a, b, 1, verbose);
		sa_swap(*a, *b, 1, verbose);
	}
}
