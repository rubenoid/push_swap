#include "header.h"

/*
**		x < y && y > z && x < z		=	1 3 2
**		x > y && y < z && x < z		=	2 1 3
**		x < y && y > z && x > z		=	2 3 1
**		x > y && y < z && x > z		=	3 1 2
**		x > y && y > z && x > z		=	3 2 1
*/
static void	sort_top_three_a(t_stack **a, t_stack **b, int verbose)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->value;
	y = (*a)->next->value;
	z = (*a)->next->next->value;
	if (x < y && y < z && x < z)
	{
		(*a)->pol = 0;
		(*a)->next->pol = 0;
		(*a)->next->next->pol = 0;
	}
	else if (x < y && y > z && x < z)
		sort_a_one_three_two_a(a, b, verbose);
	else if (x > y && y < z && x < z)
		sort_a_two_one_three_a(a, b, verbose);
	else if (x < y && y > z && x > z)
		sort_a_two_three_one(a, b, verbose);
	else if (x > y && y < z && x > z)
		sort_a_three_one_two(a, b, verbose);
	else if (x > y && y > z && x > z)
		sort_a_three_two_one(a, b, verbose);
}

void	sort_top_a(t_stack **a, t_stack **b, int verbose)
{
	if (count_not_sorted(*a) == 0)
		terminate("Something went wrong with sort_top_a\n");
	else if (count_not_sorted(*a) == 1)
		(*a)->pol = 0;
	else if (count_not_sorted(*a) == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa_swap(*a, *b, 1, verbose);
		(*a)->pol = 0;
		(*a)->next->pol = 0;
	}
	else if (count_not_sorted((*a)) == 3)
		sort_top_three_a(a, b, verbose);
}
