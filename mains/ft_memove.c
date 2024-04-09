/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:32:05 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 14:32:17 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	move;

	if (dest == src || !n)
		return (dest);
	move = 0;
	if (dest < src)
	{
		while (move < n)
		{
			*((char *)dest + move) = *((char *)src + move);
			move++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dest + n - 1) = *((char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}

int	main(void)
{
	char str1[] = "Hello, World!";
	char str2[20];

	ft_memmove(str2, str1, strlen(str1) + 1);

	printf("Original string: %s\n", str1);
	printf("Copied string: %s\n", str2);

	return (0);
}
