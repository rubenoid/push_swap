#include "header.h"

void	swap(t_stack *list)
{
	int	tmp_value;
	int	tmp_pol;

	if (list == NULL || count(list) < 2)
		return ;
	tmp_value = list->value;
	tmp_pol = list->pol;
	list->value = list->next->value;
	list->pol = list->next->pol;
	list->next->value = tmp_value;
	list->next->pol = tmp_pol;
}

void	push_to_other(t_stack **from, t_stack **to)
{
	t_stack	*to_move;

	if (*from == NULL)
		return ;
	to_move = *from;
	*from = (*from)->next;
	to_move->next = *to;
	*to = to_move;
}

void	rotate_up(t_stack **list)
{
	t_stack	*curr;
	t_stack	*to_move_down;

	if (*list == NULL || count(*list) < 2)
		return ;
	to_move_down = *list;
	curr = *list;
	while (curr->next != NULL)
		curr = curr->next;
	*list = to_move_down->next;
	curr->next = to_move_down;
	to_move_down->next = NULL;
}

void	rotate_down(t_stack **list)
{
	t_stack	*curr;

	if (*list == NULL || count(*list) < 2)
		return ;
	curr = *list;
	while (curr->next->next != NULL)
		curr = curr->next;
	curr->next->next = *list;
	*list = curr->next;
	curr->next = NULL;
}

void	rrr_rotate_down(t_stack **a, t_stack **b, int print, int verbose)
{
	rotate_down(a);
	rotate_down(b);
	if (print)
		write(1, "rrr\n", 4);
	if (verbose)
		print_stacks(*a, *b);
}
