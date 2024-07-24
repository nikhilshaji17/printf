/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:34:53 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/24 11:34:54 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *num_printed)
{
	char	digit;

	if (n > 0)
	{
		digit = (n % 10) + '0';
		ft_putunbr(n / 10, num_printed);
		write(1, &digit, 1);
		*num_printed += 1;
	}
}
