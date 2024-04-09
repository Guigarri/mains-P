/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:24:37 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/14 13:25:42 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


void	*ft_memset(void *str, int a, size_t n)
{
	size_t	set;

	set = 0;
	while (set < n)
{
	*((unsigned char *)str + set) = a;
	set++;
}
return (str);
}
void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}
void	*ft_calloc(size_t nmatz, size_t size)
{
	void	*bufer;

	bufer = (void *)malloc(size * nmatz);
	if (!bufer)
		return (NULL);
	ft_bzero(bufer, size * nmatz);
	return (bufer);
}

int main()
{
	size_t num_elements = 5;
	size_t element_size = sizeof(int);
	int *my_array = (int *)ft_calloc(num_elements, element_size);

	if (!my_array)
	{
		printf("Error allocating memory.\n");
		return 1;
	}

	// Initialize the array with some values
	for (size_t i = 0; i < num_elements; ++i)
		my_array[i] = i * 10;

	// Print the array
	for (size_t i = 0; i < num_elements; ++i)
		printf("my_array[%zu] = %d\n", i, my_array[i]);

	// Clean up
	free(my_array);

	return 0;
}
