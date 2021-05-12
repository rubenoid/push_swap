#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				pol;
	struct s_stack	*next;
}					t_stack;

int		is_ok(t_stack *a, t_stack *b, int started_with);
int		find_median_part(t_stack *list);
int		check_doubles(t_stack **a);
int		check_input(int ac, char **s);
int		check_list_doubles(t_stack *sorted_list);
int		count(t_stack *list);
int		count_not_sorted(t_stack *list);
int		count_pol(t_stack *list, int pol);
void	insert_sorted(t_stack **root, int value);
void	sort_list_pol(t_stack *list, t_stack **sorted_part, int pol);
void	terminate(char *s);
void	deallocate(t_stack **root);
void	insert_beginning(t_stack **root, int value);
void	insert_end(t_stack **root, int value);
void	pa_push_to_a(t_stack **a, t_stack **b, int print, int verbose);
void	parse_numbers(char **av, t_stack **a, int ac, int i);
void	pb_push_to_b(t_stack **a, t_stack **b, int print, int verbose);
void	print_stacks(t_stack *a, t_stack *b);
void	push_to_other(t_stack **from, t_stack **to);
void	ra_rotate_up(t_stack **a, t_stack **b, int print, int verbose);
void	rb_rotate_up(t_stack **a, t_stack **b, int print, int verbose);
void	rotate_down(t_stack **list);
void	rotate_up(t_stack **list);
void	rr_rotate_up(t_stack **a, t_stack **b, int print, int verbose);
void	rra_rotate_down(t_stack **a, t_stack **b, int print, int verbose);
void	rrb_rotate_down(t_stack **a, t_stack **b, int print, int verbose);
void	rrr_rotate_down(t_stack **a, t_stack **b, int print, int verbose);
void	sa_swap(t_stack *a, t_stack *b, int print, int verbose);
void	sb_swap(t_stack *a, t_stack *b, int print, int verbose);
void	sort(t_stack **a, t_stack **b, int verbose);
void	sort_a_one_three_two_a(t_stack **a, t_stack **b, int verbose);
void	sort_a_three_one_two(t_stack **a, t_stack **b, int verbose);
void	sort_a_three_two_one(t_stack **a, t_stack **b, int verbose);
void	sort_a_two_one_three_a(t_stack **a, t_stack **b, int verbose);
void	sort_a_two_three_one(t_stack **a, t_stack **b, int verbose);
void	sort_top_a(t_stack **a, t_stack **b, int verbose);
void	ss_swap(t_stack *a, t_stack *b, int print, int verbose);
void	swap(t_stack *list);
void	verbose_on_off(int *i, int *verbose, char **av);

#endif