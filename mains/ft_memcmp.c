/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:46:47 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/15 15:08:43 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t num)
{
    size_t a;
    unsigned const char *str1;
    unsigned const char *str2;

    a = 0;
    str1 = (unsigned const char *) s1;
    str2 = (unsigned const char *) s2;
    while (a < num)
    {
        if (*str1 != *str2)
        {
            return ((int)(str1 - str2));
        }
        str1++;
        str2++;
        a++;
    }
    return (0);
}

int main() {
    const char *str1 = "guapaa";
    const char *str2 = "guapa";
    size_t num = 7;

    unsigned int result = ft_memcmp(str1, str2, num);

    if (result == 0) {
        printf("Las cadenas son iguales hasta %zu caracteres.\n", num);
    } else {
        printf("Las cadenas son diferentes en la posición %d.\n", result);
    }

    return 0;
}




