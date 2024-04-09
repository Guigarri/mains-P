/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:47:03 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 15:04:09 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str)
{
    size_t l = 0;
    while (str[l])
        l++;
    return l;
}

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t cat;
    size_t src_cat;
    size_t result;

	cat = 0;
	src_cat = 0;
    if (n == 0)
        return (ft_strlen(src));
    else if (n < ft_strlen(dest))
        result = ft_strlen(src) + n;
    else
        result = ft_strlen(src) + ft_strlen(dest);

    while (src[src_cat] != '\0' && cat + 1 < n)
    {
        dest[cat] = src[src_cat];
        src_cat++;
        cat++;
    }
    dest[cat] = '\0';
    return result;
}

int main(void)
{
    char destino[20] = "Hola, ";
    const char *fuente = "mundo!";
    size_t capacidad = sizeof(destino);
    size_t resultado = ft_strlcat(destino, fuente, capacidad);

    printf("El resultado de ft_strlcat es: %zu\n", resultado);
    printf("El contenido de destino es: \"%s\"\n", destino);

    return 0;
}

