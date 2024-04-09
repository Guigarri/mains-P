/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:24:48 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/15 15:28:40 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
char	*ft_strnstr(const char *str, const char *seeker, size_t l)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	if (seeker[i] == '\0')
		return ((char *)str);
	while (str[i])
	{
		while (str [i + a] == seeker[a] && (i + a) < l)
		{
			if (str[i + a] == '\0' && seeker[a] == '\0')
				return ((char *)str + i);
			a++;
		}
		if (seeker[a] == '\0')
			return ((char *) str + i);
		i++;
	}
	return (0);
}
int main()
{
    const char *str = "Esto es una cadena de prueba";
    const char *seeker = "hola";
    size_t l = 30; // Longitud de la cadena haystack

    char *result = ft_strnstr(str, seeker, l);

    if (result)
    {
        printf("La cadena se encuentra en la posición: %ld\n", result - str);
    }
    else
    {
        printf("La cadena no se encontró.\n");
	}
}
