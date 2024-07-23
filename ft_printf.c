/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:36:44 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/23 10:36:46 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char c, va_list args)
{
	if (c == 'c')
		return ft_putchar(va_arg(args, char));
	else if (c == 's')
		return ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		return (ft_putstr("0x") + ft_putptr(va_arg(args, void *)));
	else if (c == 'i' || c == 'd')
		return ft_putnbr(va_arg(args, int));
	else if (c == '%')
		return ft_putchar('%');
	else if (c == 'u')
		return ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		return ft_puthex(va_arg(args, unsigned int), c);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		num_printed;
	int		i;

	num_printed = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			num_printed += check_format(format[i + 1], args);
		else
		{
			write(1, &format[i], 1);
			num_printed += 1;
		}
		i += 1;
	}
	va_end(args);
	return (num_printed);
}
