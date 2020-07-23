# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abourdar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/22 16:43:44 by abourdar          #+#    #+#              #
#    Updated: 2020/07/22 16:43:51 by abourdar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c

OBJS = ${SRC:.C=.O}

HEADERS = includes

CFLGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.c}

all: ${NAME}

${NAME}:
	${OBJS}
	${CC} ${CFLGS} ${SRC} -I${HEADERS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:
	fclean all
