/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:34:06 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/24 11:34:08 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *num_printed);
void	ft_putstr(char *s, int *num_printed);
void	ft_putnbr(int n, int *num_printed);
void	ft_putunbr(unsigned int n, int *num_printed);
void	ft_puthex(unsigned long long n, char c, int *num_printed);
int		ft_printf(const char *format, ...);

#endif