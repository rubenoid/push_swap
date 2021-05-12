#include "header.h"

int	count_not_sorted(t_stack *list)
{
	if (list == NULL)
		return (0);
	while (list != NULL && list->pol == 0)
		list = list->next;
	if (list == NULL)
		return (0);
	return (1 + count_not_sorted(list->next));
}

int	count_pol(t_stack *list, int pol)
{
	if (list == NULL || list->pol != pol)
		return (0);
	return (1 + count_pol(list->next, pol));
}

void	deallocate(t_stack **root)
{
	t_stack	*curr;
	t_stack	*aux;

	curr = *root;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	*root = NULL;
}
