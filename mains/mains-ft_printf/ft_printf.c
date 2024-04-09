/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:00:57 by guigarri          #+#    #+#             */
/*   Updated: 2024/04/02 20:05:41 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

int		ft_putchar(int c);

int		ft_putstr(char *str);

int		ft_putnbr(int n);

int		ft_printf_unsigned(unsigned int num);

int		ft_print_hex(unsigned int num, char *base);

int		ft_print_ptr(size_t ptr);

static int	converter(char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, size_t)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_printf_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		lenght;

	va_start(args, format);
	i = 0;
	lenght = 0;
	while (format [i])
	{
		if (format[i] == '%')
		{
			lenght += converter(format[i + 1], args);
			i++;
		}
		else
			lenght += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (lenght);
}
