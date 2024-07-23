#include "ft_printf.h"

static int	print_number(unsigned int x, int count)
{
	char	digit;

	if (x > 0)
	{
		digit = (x % 10) + '0';
		count += print_number(x / 10, count);
		write(1, &digit, 1);
		count += 1;
	}
	return (count);
}

void	ft_putnbr(int n)
{
	unsigned int	x;
	int				count;

	count = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		x = n * -1;
	}
	else
		x = n;
	return (print_number(x), count);
}