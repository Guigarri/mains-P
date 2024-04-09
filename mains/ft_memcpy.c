/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:52:25 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 13:52:36 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cpy;

	if (dest == src || !n)
		return (dest);
	cpy = 0;
	while (cpy < n)
	{
		*((char *)dest + cpy) = *((char *)src + cpy);
		cpy++;
	}
	return (dest);
}

int main()
{
    // Ejemplo de uso
    char src[] = "Hello, world!";
    char dest[20];
    ft_memcpy(dest, src, 13);
    printf("Copia: %s\n", dest);
    return 0;
}

