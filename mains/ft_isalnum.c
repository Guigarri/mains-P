/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:28:33 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 13:29:04 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')
        || (a >= '0' && a <= '9'))
        return 1;
    return 0;
}

int main()
{
    char test_char = '7'; // Cambia este valor para probar diferentes caracteres

    if (ft_isalnum(test_char))
        printf("El carácter '%c' es alfanumérico.\n", test_char);
    else
        printf("El carácter '%c' no es alfanumérico.\n", test_char);

    return 0;
}

