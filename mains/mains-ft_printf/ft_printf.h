/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:25:31 by guigarri          #+#    #+#             */
/*   Updated: 2024/04/02 20:11:00 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_strlen(const char *str);
int		ft_print_ptr(size_t ptr);
int		ft_putnbr(int n);
int		ft_printf_unsigned(unsigned int num);
int		ft_print_hex(unsigned int num, char *base);
void	ft_putchar_fd(char c, int fd);

#endif
