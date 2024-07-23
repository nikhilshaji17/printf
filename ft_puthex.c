#include "ft_printf.h"

static int	ft_puthex_lower(unsigned int n)
{
	int	count;

	count = 0;

}

static int	ft_puthex_upper(unsigned int n)
{
	int				count;

	count = 0;
	
}

int		ft_puthex(unsigned int n, char c)
{
	if (c >= 65 && c <= 97)
		return (ft_puthex_lower(n));
	else
		return (ft_puthex_upper(n));
}