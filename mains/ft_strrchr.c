/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:58:07 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 18:58:11 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}
char	*ft_strrchr(const char *str, int a)
{
	int	chr;

	chr = ft_strlen((char *)str) + 1;
	while (chr--)
	{
		if (*(str + chr) == a)
			return ((char *)(str + chr));
	}
	return (0);
}

int	main(void)
{
	const char *cadena = "¡Hola, mundo!";
	int caracter_a_buscar = 'o';

	// Llamada a ft_strrchr
	char *resultado = ft_strrchr(cadena, caracter_a_buscar);

	if (resultado)
		printf("El caracter '%c' se encuentra en la posición %ld de la cadena.\n", caracter_a_buscar, resultado - cadena);
	else
		printf("El caracter '%c' no se encuentra en la cadena.\n", caracter_a_buscar);

	return (0);
}
