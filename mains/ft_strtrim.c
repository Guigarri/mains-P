/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:53:00 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/28 13:50:02 by guigarri         ###   ########.fr       */
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
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;
	char			*mod;

	mod = malloc (sizeof (char) * (len +1));
	if (!s)
		return (NULL);
	a = 0;
	while (start < ft_strlen((char *)s) && s[start + a] && a < len)
	{
		mod[a] = s[start + a];
		a++;
	}
	mod[a] = '\0';
	return (mod);
}
char	*ft_strchr(const char *str, int a)
{
	while (*str)
	{
		if (*str == a)
			return ((char *)str);
		str++;
	}
	if (a == '\0')
		return ((char *)str);
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	n = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[n] && n != '\0'))
		n--;
	return (ft_substr((char *)s1, 0, n + 1));
}
int main(void)
{
    // Ejemplo de uso de ft_strtrim
    const char *input_string = "  ¡Hola, mundo! ";
    const char *trim_set = " ,!";

    char *result = ft_strtrim(input_string, trim_set);

    if (result)
    {
        printf("Subcadena recortada: \"%s\"\n", result);
        free(result); // No olvides liberar la memoria asignada
    }
    else
    {
        printf("Error: ft_strtrim devolvió NULL.\n");
    }

    return 0;
}
