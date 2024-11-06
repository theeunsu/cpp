# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 12:37:40 by eahn              #+#    #+#              #
#    Updated: 2024/11/06 14:47:34 by eahn             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17

NAME = brain

SRC_DIR = ./src/

SRCS = main.cpp

NEW_SRCS = $(addprefix $(SRC_DIR), $(SRCS))

OBJS = $(NEW_SRCS:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	: $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
