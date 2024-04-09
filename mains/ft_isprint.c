/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:34:53 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 13:34:56 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}
int main()
{
    char test_char = 'Ç'; // Cambia este valor para probar diferentes caracteres

    if (ft_isprint(test_char))
        printf("El carácter '%c' es caracter imprimible.\n", test_char);
    else
        printf("El carácter '%c' no es caracter imprimible.\n", test_char);

    return 0;
}
