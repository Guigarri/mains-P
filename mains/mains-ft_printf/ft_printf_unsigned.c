/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:28:19 by guigarri          #+#    #+#             */
/*   Updated: 2024/04/02 19:49:45 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int		ft_putchar(int c);

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
