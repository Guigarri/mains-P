/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:10:22 by guigarri          #+#    #+#             */
/*   Updated: 2024/04/02 19:43:23 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_strlen(const char *str);

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = ft_strlen(str);
	return (write (1, str, i));
}
