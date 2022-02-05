# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 14:12:58 by gjacinta          #+#    #+#              #
#    Updated: 2022/02/05 16:45:27 by gjacinta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = client

NAME_S = server

SRC_C = clientfolder/client.c\
		clientfolder/atoi.c\
		clientfolder/utils.c

SRC_S = serverfolder/server.c\
		serverfolder/utils.c

HDRS_C = clientfolder/client.h

HDRS_S = serverfolder/server.h

OBJ_C = $(SRC_C:.c=.o)

OBJ_S = $(SRC_S:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME_C) $(NAME_S)

$(NAME_S): $(HDRS_S) $(OBJ_S)
			$(CC) $(FLAGS) $(OBJ_S) -o $(NAME_S)

$(NAME_C): $(HDRS_C) $(OBJ_C)
			$(CC) $(FLAGS) $(OBJ_C) -o $(NAME_C)

clean:
		rm -f $(OBJ_C)
		rm -f $(OBJ_S)


fclean: clean
		rm -f $(NAME_C)
		rm -f $(NAME_S)

re:		fclean all

.PHONY: all clean fclean re