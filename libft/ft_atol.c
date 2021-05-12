long	ft_atol(const char *s)
{
	long	sign;
	double	result;

	sign = 1;
	result = 0;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + *s - '0';
		if (sign == 1 && result < 0)
			return (-1);
		else if (sign == -1 && -result > 0)
			return (0);
		s++;
	}
	return ((long) sign * (long) result);
}
