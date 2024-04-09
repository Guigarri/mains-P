/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:04:44 by guigarri          #+#    #+#             */
/*   Updated: 2024/04/08 18:05:07 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nr, char *base)
{
	int		nr_base[16];
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (nr == 0)
		result += ft_putchar('0');
	while (nr)
	{
		nr_base[i] = nr % 16;
		nr = nr / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_putchar(base[nr_base[i]]);
	return (result);
}
