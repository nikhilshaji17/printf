#include "ft_printf.h"

int	ft_putunbr(unsigned int n, int count)
{
	char	digit;
	int		count;

	count = 0;
	if (n > 0)
	{
		digit = (n % 10) + '0';
		count += ft_putunbr(n / 10, count);
		write(1, &digit, 1);
		count += 1;
	}
	return (count);
}