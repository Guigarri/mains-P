/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:15:31 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 17:20:28 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
		return (a - 32);
	return (a);
}

int main()
{
    // Ejemplo de uso
    char uppercase = 'h';
    char lowercase = ft_toupper(uppercase);
    printf("'%c' en mayuscula es '%c'\n", uppercase, lowercase);

    return 0;
}

