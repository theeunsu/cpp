# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 19:18:33 by eahn              #+#    #+#              #
#    Updated: 2024/09/19 23:49:59 by eahn             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = account

SRC_DIR = ./src/
INC_DIR = ./inc/

SRCS = Account.cpp tests.cpp

NEW_SRCS = $(addprefix $(SRC_DIR), $(SRCS))

OBJS = $(NEW_SRCS:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(NAME)	: $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
