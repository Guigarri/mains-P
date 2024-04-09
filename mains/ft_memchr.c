/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:23:20 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 19:23:54 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int a, size_t n)
{
	size_t	chr;

	chr = 0;
	while (chr < n)
	{
		if (*((unsigned char *)s + chr) == (unsigned char)a)
			return ((void *)s + chr);
		chr++;
	}
	return (NULL);
}
int main()
{
	char str[] = "Hello, World!";
	char target = 'o';
	size_t len = sizeof(str);

	// Buscar la primera ocurrencia de 'o' en la cadena
	void *result = ft_memchr(str, target, len);

	if (result != NULL)
	{
		printf("Se encontró '%c' en la posición %ld.\n", target, (char *)result - str);
	}
	else
	{
		printf("'%c' no se encontró en la cadena.\n", target);
	}

	return 0;
}
