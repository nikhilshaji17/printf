#include <stdio.h>
#include "ft_printf.h"

// void	ft_puthex(unsigned int n, char c)
// {
// 	char			result;
// 	char			*table = "0123456789abcdef";
// 	int				digit;

// 	if (n > 0)
// 	{
// 		digit = n % 16;
// 		result = table[digit];
// 		ft_puthex((n / 16), c);
// 		write(1, &result, 1);
// 	}
// }

// int main()
// {
// 	// printf("Hello \0 there");
// 	// printf("Again %");
// 	// printf("Again %vklm"); 
// 	// printf("%d", printf("Again"));
// 	// printf("%d\n",printf("%d\n", printf("Again\n")));
// 	// printf("%c", '\\');
// 	// int x = 10;
// 	// printf("%i\n", x);
// 	// printf("%d\n", x);
// 	// printf("%u\n", x);
// 	// printf("%d\n", printf("%d\n", 12345));
// 	// printf("%x", 12354);
// 	// printf("%x\n", 909972834);	
// 	// ft_puthex(909972834, 'x');
// }

int main()
{
	char *test = "hello";
	printf("%p \n", test);
	ft_printf("%p \n", test);
}