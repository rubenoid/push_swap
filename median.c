#include "header.h"

void	sort_list_pol(t_stack *list, t_stack **sorted_part, int pol)
{
	*sorted_part = NULL;
	insert_sorted(sorted_part, list->value);
	while (list->next != NULL && list->pol == pol)
	{
		list = list->next;
		if (list->pol == pol)
			insert_sorted(sorted_part, list->value);
		else
			break ;
	}
}

/*
**	Will return middle if uneven, left one in case of even
*/
int	find_median(t_stack *list)
{
	t_stack	*slow_ptr;
	t_stack	*fast_ptr;
	t_stack	*pre_of_slow;

	slow_ptr = list;
	fast_ptr = list;
	pre_of_slow = list;
	if (list != NULL)
	{
		while (fast_ptr != NULL && fast_ptr->next != NULL)
		{
			fast_ptr = fast_ptr->next->next;
			pre_of_slow = slow_ptr;
			slow_ptr = slow_ptr->next;
		}
		if (fast_ptr != NULL)
			return (slow_ptr->value);
		else
			return (pre_of_slow->value);
	}
	return (-1);
}

int	find_median_part(t_stack *list)
{
	t_stack	*sorted_part;
	int		median;

	if (count(list) == 0)
		return (0);
	sort_list_pol(list, &sorted_part, list->pol);
	median = find_median(sorted_part);
	deallocate(&sorted_part);
	return (median);
}
