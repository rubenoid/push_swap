#include "header.h"

void	terminate(char *s)
{
	ft_putstr_fd(s, 2);
	exit(1);
}
