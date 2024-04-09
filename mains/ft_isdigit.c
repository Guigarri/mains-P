/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:32:19 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 13:32:23 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
int main()
{
    char test_char = '2'; // Cambia este valor para probar diferentes caracteres

    if (ft_isdigit(test_char))
        printf("El carácter '%c' es numerico.\n", test_char);
    else
        printf("El carácter '%c' no es numerico.\n", test_char);

    return 0;
}
