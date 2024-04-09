/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:10:57 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/27 17:58:12 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
int	main(void)
{
	char str[] = "wakawaka eeh eeh!";
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("caracter %d: %c\n", i, str[i]);
		i++;
	}
	return (0);
}
