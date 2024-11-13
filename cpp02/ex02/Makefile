# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 17:38:35 by eahn              #+#    #+#              #
#    Updated: 2024/11/13 15:30:49 by eahn             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17

NAME = fixed

SRC_DIR = ./src/
INC_DIR = ./inc/
OBJ_DIR = ./obj/

SRCS = main.cpp Fixed.cpp

NEW_SRCS = $(addprefix $(SRC_DIR), $(SRCS))
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

# 최종 바이너리 생성
all: $(NAME)

# OBJ_DIR 생성 규칙
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# .o 파일 생성 규칙
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re
