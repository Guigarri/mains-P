/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:25:28 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 12:37:46 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t		idx;
	char		*tmp;

	tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!s || !f || !tmp)
		return (NULL);
	idx = 0;
	while (idx < (ft_strlen((char *)s)))
	{
		tmp[idx] = f(idx, s[idx]);
		idx++;
	}
	tmp[idx] = '\0';
	return (tmp);
}

char	my_function(unsigned int index, char c)
{
	return (c - 32);
}

int	main(void)
{
	const char *input_string = "hola";
	char *result;


	size_t length = ft_strlen(input_string);
	printf("Longitud de la cadena: %zu\n", length);

	result = ft_strmapi(input_string, my_function);
	printf("Resultado después de aplicar la función: %s\n", result);

	free(result);

	return (0);
}

