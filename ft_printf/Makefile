# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 09:57:55 by sayar             #+#    #+#              #
#    Updated: 2021/12/08 10:25:34 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c ft_printf_functs.c ft_printf_functs1.c ft_printf_utils.c

OBJ = ${patsubst %.c, %.o, ${SRC}}

.PHONY : clean fclean all re

all : ${NAME}

${NAME} : ${OBJ}
	ar cr ${NAME} ${OBJ}

%.o : %.c ft_printf.h
	${CC} -c ${FLAGS} $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}
	
re : all
