# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guigarri <guigarri@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 18:03:55 by guigarri          #+#    #+#              #
#    Updated: 2024/04/08 18:04:14 by guigarri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME= libftprintf.a

CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -f

SRCS =	ft_putchar.c \
				ft_printf.c \
				ft_putstr.c \
				ft_strlen.c \
				ft_putchar_fd.c \
				ft_print_ptr.c \
				ft_putnbr.c \
				ft_print_unsigned.c \
				ft_print_hex.c


OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS)

all: $(NAME)

clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all re clean fclean
