/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:30:34 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 13:30:42 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int a)
{
	if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
		return (1);
	return (0);
}

int main()
{
    char test_char = 'G'; // Cambia este valor para probar diferentes caracteres

    if (ft_isalpha(test_char))
        printf("El carácter '%c' es alfabetico.\n", test_char);
    else
        printf("El carácter '%c' no es alfabetico.\n", test_char);

    return 0;
}
