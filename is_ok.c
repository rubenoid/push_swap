#include "header.h"

/*
** Returns 0 on success
*/
int	is_ok(t_stack *a, t_stack *b, int started_with)
{
	int	previous;

	if (count(a) != started_with)
		return (1);
	else if (count(b) != 0)
		return (1);
	else
	{
		previous = a->value;
		a = a->next;
		while (a != NULL)
		{
			if (a->value < previous)
				return (1);
			previous = a->value;
			a = a->next;
		}
	}
	return (0);
}
