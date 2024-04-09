/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:35:23 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 14:35:29 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	main(void)
{
	const char *my_string = "Hello, World!";
	char letter = 'o';

	char *result = ft_strchr(my_string, letter);

	if (result)
		printf("'%c' found at position %ld in the string.\n", letter, result - my_string);
	else
		printf("'%c' not found in the string.\n", letter);

	return (0);
}
