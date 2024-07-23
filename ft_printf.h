#ifndef FT_PRINTF
# define FT_PRINTF

# include <unistd.h>

int		ft_putchar();
int		ft_putstr();
int		ft_strlen();
int		ft_putptr();
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int n);
int		ft_puthex(unsigned int n, char c);