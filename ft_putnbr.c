/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:34:46 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/24 11:34:48 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_putnbr(int n, int *num_printed)
{
	unsigned int	x;

	if (n == 0)
	{
		write(1, "0", 1);
		*num_printed += 1;
		return ;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		*num_printed += 1;
		x = n * -1;
	}
	else
		x = n;
	*num_printed += print_number(x, 0);
}
