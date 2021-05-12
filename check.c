#include "header.h"

int	check_input(int ac, char **s)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < ac)
	{
		j = 0;
		len = ft_strlen(s[i]);
		if (s[i][0] == '-')
			j++;
		while (ft_isdigit(s[i][j]))
			j++;
		if (j != len || len > 11 || len == 0
			|| ft_atol(s[i]) > 2147483647 || ft_atol(s[i]) < -2147483648)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_doubles(t_stack **a)
{
	t_stack	*sorted;

	sort_list_pol(*a, &sorted, (*a)->pol);
	if (check_list_doubles(sorted))
	{
		deallocate(&sorted);
		deallocate(a);
		return (1);
	}
	else
	{
		deallocate(&sorted);
		return (0);
	}
}

int	check_list_doubles(t_stack *sorted_list)
{
	int	prev_value;

	if (count(sorted_list) == 0)
		exit(0);
	prev_value = sorted_list->value;
	while (sorted_list->next != NULL)
	{
		sorted_list = sorted_list->next;
		if (prev_value == sorted_list->value)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		prev_value = sorted_list->value;
	}
	return (0);
}
