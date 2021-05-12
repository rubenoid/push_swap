#include "header.h"

void	push_part_to_a(t_stack **a, t_stack **b, int verbose)
{
	int	pol;

	if (count(*b) == 0)
		return ;
	pol = (*b)->pol;
	pa_push_to_a(a, b, 1, verbose);
	if (count(*b) == 0)
		return ;
	while (((*b)->next != NULL) && (*b)->pol == pol)
		pa_push_to_a(a, b, 1, verbose);
	if (count(*b) == 1 && (*b)->pol == pol)
		pa_push_to_a(a, b, 1, verbose);
}

int	sort_to_b_push(t_stack **a, t_stack **b, int median, int verbose)
{
	if ((*a)->value <= median)
	{
		pb_push_to_b(a, b, 1, verbose);
		return (0);
	}
	else
	{
		(*a)->pol *= -1;
		ra_rotate_up(a, b, 1, verbose);
		return (1);
	}
}

void	sort_to_b_with_sorted(t_stack **a, t_stack **b, int verbose)
{
	int	median;
	int	pol;
	int	rotate_back;

	if (count_not_sorted(*a) <= 3)
	{
		sort_top_a(a, b, verbose);
		return ;
	}
	pol = (*a)->pol;
	median = find_median_part(*a);
	rotate_back = 0;
	while ((*a)->pol == pol)
		rotate_back += sort_to_b_push(a, b, median, verbose);
	while (rotate_back)
	{
		rra_rotate_down(a, b, 1, verbose);
		rotate_back--;
	}
	return (sort_to_b_with_sorted(a, b, verbose));
}

void	sort_to_b_first_time(t_stack **a, t_stack **b, int verbose)
{
	int	median;
	int	pol;

	if (count_not_sorted(*a) <= 3)
	{
		sort_top_a(a, b, verbose);
		return ;
	}
	pol = (*a)->pol;
	median = find_median_part(*a);
	if (count(*a) < 6)
		median -= 1;
	while ((*a)->pol == pol)
		sort_to_b_push(a, b, median, verbose);
	return (sort_to_b_first_time(a, b, verbose));
}

void	sort(t_stack **a, t_stack **b, int verbose)
{
	if (count(*a) == 0)
		return ;
	if (count_pol(*a, (*a)->pol) == count(*a))
		sort_to_b_first_time(a, b, verbose);
	else
		sort_to_b_with_sorted(a, b, verbose);
	push_part_to_a(a, b, verbose);
	if (!is_ok(*a, *b, count(*a)))
		return ;
	return (sort(a, b, verbose));
}
