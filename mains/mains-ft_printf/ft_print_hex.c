/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:49:51 by guigarri          #+#    #+#             */
/*   Updated: 2024/04/04 14:26:06 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int		ft_putchar(int c)
{
    return (write (1, &c, 1));
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

int main()
{
	unsigned int	a = 10101010;
	char			*hola = "0123456789ABCDEF";

	ft_print_hex(a, hola);
	ft_putchar('\n');
	return (0);
}
