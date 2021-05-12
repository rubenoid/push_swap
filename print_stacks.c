#include "header.h"

/*
**	print the value and polarity
*/
void	print_one(t_stack *s)
{
	ft_putnbr_fd(s->value, 2);
	if (s->value > 9999999 || s->value < -999999)
		write(2, "\t", 1);
	else
		write(2, "\t\t", 2);
	ft_putnbr_fd(s->pol, 2);
}

void	print_stacks(t_stack *a, t_stack *b)
{
	write(2, "-- STACK A --- pol ------- STACK B --- pol\n", 43);
	while (a || b)
	{
		if (a)
		{
			print_one(a);
			write(2, "\t", 1);
			a = a->next;
		}
		else
			write(2, "-\t\t\t", 4);
		if (b)
		{
			print_one(b);
			b = b->next;
		}
		write(2, "\n", 1);
	}
	write(2, "----------------------------------------\n\n", 43);
}
