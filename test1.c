#include <stdarg.h>
#include <stdio.h>

void numbers(int num_args, ...)
{
	va_list args;
	va_start(args, num_args);

	int i;
	i = 0;
	while (i < num_args)
	{
		int x = va_arg(args, int);
		printf("%d\n", x);
		i += 1;
	}

	va_end(args);
}


int main()
{
	numbers(4,1,2,3,4);
}