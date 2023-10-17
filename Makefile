# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fl-hote <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 17:32:29 by fl-hote           #+#    #+#              #
#    Updated: 2022/10/02 17:32:46 by fl-hote          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG	= pipex

SRCS 	= srcs/pipex.c srcs/utils.c
OBJS 	= ${SRCS:.c=.o}

HEADER	= -Iincludes

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

.c.o:		%.o : %.c
					@gcc ${CFLAGS} ${HEADER} -c $< -o $(<:.c=.o)

all: 		${PROG}

${PROG}:	${OBJS}
					make re -C ./libft
					$(CC) ${OBJS} -Llibft -lft -o ${PROG}

clean:
					make clean -C ./libft
					rm -f ${OBJS}

fclean: 	clean
					make fclean -C ./libft
					rm -f ${PROG}

re:			fclean all

.PHONY: all clean fclean re
