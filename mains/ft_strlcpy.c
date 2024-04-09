/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:30:02 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 16:30:16 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t a;
    size_t count;

    a = 0;
    count = 0;
    if (!dest || !src)
        return (0);
    while (src[count])
        count++;
    while (src[a] && a + 1 < n)
    {
        dest[a] = src[a];
        a++;
    }
    if (n)
        dest[a] = '\0';
    return (count);
}

int main()
{
    // Ejemplo de uso
    char src[] = "Hello, world!";
    char dest[20]; // Asegúrate de que dest tenga suficiente espacio para copiar src

    size_t copied = ft_strlcpy(dest, src, sizeof(dest));
    printf("Copied %zu characters: %s\n", copied, dest);

    return 0;
}
