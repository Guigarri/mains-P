/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:29:10 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 17:08:23 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
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
int main(void)
{
   
    const char *input_string = "¡Hola, mundo!";
    unsigned int start_index = 6;
    size_t substring_length = 14;

    char *result = ft_substr(input_string, start_index, substring_length);

    if (result)
    {
        printf("Subcadena: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error: ft_substr devolvió NULL.\n");
    }

    return 0;
}
