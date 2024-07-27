#include <stdio.h>
#include "ft_printf.h"

static void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_puthex(unsigned int n, char c, int *num_printed)
{
	int		digit;
	char	result;
	char	table[17];

	ft_strcpy(table, "0123456789abcdef");
	if (n > 0)
	{
		digit = n % 16;
		result = table[digit];
		ft_puthex((n / 16), c, num_printed);
		if (c == 'x')
			write(1, &result, 1);
		else
		{
			if (result >= 'a' && result <= 'f')
				result -= 32;
			write(1, &result, 1);
		}
		*num_printed += 1;
	}
}


int main()
{
	// char *test = "Hello";
	int a = 179453;
	int num_printed = 0;
	printf("%x\n", a);
	ft_puthex((unsigned int)a, 'x', &num_printed);
}

