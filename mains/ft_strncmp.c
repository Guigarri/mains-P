/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:13:22 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 19:13:28 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t a)
{
	size_t	cmp;

	if (a == 0)
		return (0);
	cmp = 0;
	while (cmp < a)
	{
		if (s1[cmp] && s1[cmp] == s2[cmp])
		{
			while (s1[cmp] && s1[cmp] == s2[cmp] && cmp < a)
				cmp++;
		}
		else
			return ((unsigned char)s1[cmp] - (unsigned char)s2[cmp]);
	}
	return (0);
}
int main(void)
{
    const char *cadena1 = "hola";
    const char *cadena2 = "holo";
    size_t longitud = 4;

    // Llamada a ft_strncmp
    int resultado = ft_strncmp(cadena1, cadena2, longitud);

    if (resultado == 0)
        printf("Las cadenas son iguales.\n");
    else if (resultado < 0)
        printf("La cadena 1 es menor que la cadena 2.\n");
    else
        printf("La cadena 1 es mayor que la cadena 2.\n");

    return 0;
}
