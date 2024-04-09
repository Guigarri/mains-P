/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:37:20 by guigarri          #+#    #+#             */
/*   Updated: 2024/03/15 16:38:18 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_atoi(const char *str)
{
	int	result;
	int	sng;

	result = 0;
	sng = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sng *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sng);
}
int main()
{
    const char *input_str = "12"; // Cambia esta cadena según tus necesidades
    int result = ft_atoi(input_str);
    printf("Entero convertido: %d\n", result);
    return 0;
}
