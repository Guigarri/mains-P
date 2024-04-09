/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:25:53 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 14:25:59 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_isascii(int a)
{
    if (a >= 0 && a <= 127)
        return (1);
    return (0);
}

int main(void)
{
    int test_values[] = {65, 97, 123, 150, 200, 255};

    for (int i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
    {
        int value = test_values[i];
        printf("¿Es %d un carácter ASCII? %s\n", value, ft_isascii(value) ? "Sí" : "No");
    }

    return 0;
}

