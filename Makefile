# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rreis-de <rreis-de@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 14:29:07 by rreis-de          #+#    #+#              #
#    Updated: 2022/11/02 15:41:33 by rreis-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS = ft_printf.c \

SRCSF	=  ft_atoi.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_calloc.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_striteri.c \
		ft_bzero.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_tolower.c \
		ft_strmapi.c \
		ft_split.c \
		ft_toupper.c \
		ft_strtrim.c

SRCSD	= $(addprefix libft/, $(SRCSF))

LIBFT = libft/libft.a

OBJS	= ${SRCS:.c=.o}

OBJSD	= ${SRCSF:.c=.o}

INCS	= ft_printf.h

LIBC	= ar rcs

CC		= clang

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror


${NAME}: libft.a ${OBJS}
	cp ${LIBFT} .
	mv libft.a ${NAME}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} ${OBJSD}

libft.a:
	cd libft && ${MAKE} all

lib_fclean:
	cd libft && ${MAKE} fclean

fclean: clean lib_fclean
	${RM} ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re