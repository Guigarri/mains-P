/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:21:02 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/15 18:21:05 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
    size_t l = 0;
    while (str[l])
        l++;
    return l;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		a_join;
	char	*join;

	a = 0;
	a_join = 0;
	join = malloc(sizeof(char) * (ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1));
	if (!join)
		return (NULL);
	while (s1[a])
		join[a_join++] = s1[a++];
	a = 0;
	while (s2[a])
		join[a_join++] = s2[a++];
	join[a_join] = '\0';
	return (join);
}
int main(void)
{
    // Ejemplo de uso de ft_strjoin
    const char *string1 = "¡Vamos, ";
    const char *string2 = "guigarri!";

    char *result = ft_strjoin(string1, string2);

    if (result)
    {
        printf("Cadena concatenada: %s\n", result);
        free(result); // No olvides liberar la memoria asignada
    }
    else
    {
        printf("Error: ft_strjoin devolvió NULL.\n");
    }

    return 0;
}
