/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:52:36 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/28 13:27:59 by guigarri         ###   ########.fr       */
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

static int	ft_wordlen(char const *s, char c) //calula la longitud de una cadena de caracteres
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	ft_countwords(char const *s, char c) //cuenta el numero de palabras en una cadena de caracteres
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s += ft_wordlen(s, c);
		}
		else
			s++;
	}
	return (count);
}

static void	*free_strs(char **strs) //libera la memoria asignada al arreglo de cadenas de caracteres
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)//divide la cadena de caracteres 
{
	char	**strs;
	int		i;
	int		count;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	strs[count] = NULL;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, ft_wordlen(s, c));
			if (!strs[i++])
				return (free_strs(strs));
			s += ft_wordlen(s, c);
		}
		else
			s++;
	}
	return (strs);
}
int	main(void)
{
	char	**result;
	char	*input_str = "muy buenas soy una cadena dividida";
	char	delimiter = ' ';

	result = ft_split(input_str, delimiter);

	if (!result)
	{
		printf("Error al dividir la cadena.\n");
		return (1);
	}

	printf("Resultado de la división:\n");
	for (int i = 0; result[i]; i++)
		printf("%s\n", result[i]);

	for (int i = 0; result[i]; i++)
		free(result[i]);
	free(result);

	return (0);
}
