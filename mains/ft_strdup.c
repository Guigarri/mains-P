/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:39:45 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 18:39:56 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}
char	*ft_strdup(const char *str)
{
	int		a;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dest)
		return (NULL);
	a = 0;
	while (str[a])
	{
		dest[a] = str[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
int main()
{
    const char *original = "Hello, world!";
    char *duplicated = ft_strdup(original);

    if (duplicated)
    {
        printf("Original: %s\n", original);
        printf("Duplicated: %s\n", duplicated);
        free(duplicated); // No olvides liberar la memoria asignada
    }
    else
    {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}
