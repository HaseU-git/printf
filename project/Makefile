# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhasegaw <yhasegaw@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/29 22:59:28 by yhasegaw          #+#    #+#              #
#    Updated: 2020/12/30 00:34:51 by yhasegaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

CC := gcc

CFLAGS := -Wall -Wextra -Werror

AR := ar rcs

RM := rm -f

DIR := ./

SRC :=	ft_atoi.c\
		ft_isdigit.c\
		ft_printf.c\
		ft_putchr_std.c\
		ft_putnbr_std.c\
		ft_putsame_std.c\
		ft_putstr_std.c\
		ft_strchr.c\
		ft_strlen.c\
		ft_hex_func.c\
		ft_ptr_func.c\
		ft_check_info.c\
		ft_print_conversions.c\
		ft_printf_utils.c\

SRCS := $(addprefix $(DIR), $(SRC))

OBJS := $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -I $(DIR) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
