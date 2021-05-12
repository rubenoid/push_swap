#include "header.h"

void	insert_beginning(t_stack **root, int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (new_node == NULL)
		terminate("MALLOC ERROR\n");
	new_node->value = value;
	new_node->pol = -1;
	new_node->next = *root;
	*root = new_node;
}

void	insert_after(t_stack *node, int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (new_node == NULL)
		terminate("MALLOC ERROR\n");
	new_node->value = value;
	new_node->pol = 9;
	new_node->next = node->next;
	node->next = new_node;
}

void	insert_sorted(t_stack **root, int value)
{
	t_stack	*curr;

	curr = *root;
	if (*root == NULL || (*root)->value >= value)
	{
		insert_beginning(root, value);
		return ;
	}
	while (curr->next != NULL)
	{
		if (curr->next->value >= value)
			break ;
		curr = curr->next;
	}
	insert_after(curr, value);
}

void	insert_end(t_stack **root, int value)
{
	t_stack	*new_node;
	t_stack	*curr;

	new_node = malloc(sizeof(t_stack));
	if (new_node == NULL)
		terminate("MALLOC ERROR\n");
	new_node->next = NULL;
	new_node->value = value;
	new_node->pol = -1;
	if (*root == NULL)
	{
		*root = new_node;
		return ;
	}
	curr = *root;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
}

int	count(t_stack *list)
{
	if (list == NULL)
		return (0);
	return (1 + count(list->next));
}
