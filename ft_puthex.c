/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:34:17 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/24 11:34:19 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char			result;
	char			table[17];
	int				digit;

	ft_strcpy(table, "0123456789abcdef");
	if (n > 15)
	{
		digit = n % 16;
		result = table[digit];
		ft_puthex((n / 16), c, num_printed);
		if (c == 'x')
			write(1, &result, 1);
		else
		{
			result -= 32;
			write(1, &result, 1);
		}
		*num_printed += 1;
	}
}
