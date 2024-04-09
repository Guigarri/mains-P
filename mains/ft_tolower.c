/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:34:09 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 16:53:20 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
		return (a + 32);
	return (a);
}

int main()
{
    // Ejemplo de uso
    char uppercase = 'H';
    char lowercase = ft_tolower(uppercase);
    printf("'%c' en minúscula es '%c'\n", uppercase, lowercase);

    return 0;
}
