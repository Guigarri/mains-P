/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:15:26 by guigarri          #+#    #+#             */
/*   Updated: 2024/04/04 19:12:52 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

int	ft_putchar(int c)
{
	return (write (1, &c, 1));
}
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	while (str && str[size])
		size++;
	return (size);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = ft_strlen(str);
	return (write (1, str, i));
}

int	ft_printf_unsigned(unsigned int num)
{
	int	n;

	n = 0;
	if (num > 9)
	{
		n += ft_printf_unsigned(num / 10);
	}
	return (n += ft_putchar(num % 10 + '0'));
}
int	ft_putnbr(int n)
{
	unsigned int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		i += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar(n % 10 + '0');
	}
	else
		i += ft_putchar(n + '0');
	return (i);
}

int	ft_print_hex(unsigned int num, char *base)
{
	int	num_base[16];
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (num == 0)
		result += ft_putchar('0');
	while (num)
	{
		num_base[i] = num % 16;
		num = num / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_putchar(base[num_base[i]]);
	return (result);
}

int	ft_ptr_len(size_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(size_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(size_t ptr)
{
	int	lenght;

	lenght = 0;
	lenght += write(1, "0x", 2);
	if (ptr == 0)
		lenght += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		lenght += ft_ptr_len(ptr);
	}
	return (lenght);
} 
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
int main()
{
    // Ejemplo de uso de ft_printf
	char	*str = "1234567890";

    ft_printf("Hola, este es un número: %d\n", 42);
    ft_printf("Este es un carácter: %c\n", 'A');
    ft_printf("Y aquí una cadena: %s\n", "¡Hola, mundo!");
    ft_printf("Aqui un puntero: %p\n", &str);
	ft_printf("Un numero sin signo: %u\n", 5);
	ft_printf("num hexadecimal en minusculas: %x\n", "ashdvredvvnekvewwdeefrf");
	ft_printf("num hexadecimal en mayus: %X\n", "ASDFFGHJHGFSDEBVEFEFVWEFV");
	ft_printf("impprime un : %%\n", "%");
	ft_printf("imprime un enteroo base 10: %i\n", 0123456);

	return 0;
}
