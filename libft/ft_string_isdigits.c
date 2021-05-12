#include "libft.h"

int	ft_string_isdigits(char *s)
{
	if (*s == '\0')
		return (0);
	if (ft_isdigit(*s))
		return (ft_string_isdigits(s + 1));
	else
		return (1);
}
