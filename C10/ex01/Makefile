# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joonpark <joonpark@student.42seoul.kr>     +#  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 11:08:29 by joonpark          #+#    #+#              #
#    Updated: 2021/04/14 13:30:44 by joonpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDE = includes

NAME = ft_display_file

SRC_DIR = srcs

OBJ_DIR = srcs

SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))

OBJS = $(SRCS:.c=.o)

OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLUDE) 

$(NAME): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

flcean: clean
	rm -f $(NAME)

re: fclean all
