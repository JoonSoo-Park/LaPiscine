# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 15:49:28 by joonpark          #+#    #+#              #
#    Updated: 2021/04/08 15:49:39 by joonpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDE = -Iinludes/

SRC_DIR = ./srcs

OBJ_DIR = ./srcs

TARGET = libft.a

SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))

OBJS = $(SRCS:c=o)

OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))

all: $(TARGET)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ -MD

$(TARGET) : $(OBJECTS)
	ar rcs $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(TARGET)

re: fclean all
