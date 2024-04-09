/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:08:14 by guigarri          #+#    #+#             */
/*   Updated: 2024/04/08 18:08:29 by guigarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_strlen( const char *str);
void	ft_putchar_fd(char c, int fd);
int		ft_print_ptr(uintptr_t ptr);
int		ft_putnbr(int n);
int		ft_print_unsigned(unsigned int num);
int		ft_print_hex(unsigned int nr, char *base);

#endif
