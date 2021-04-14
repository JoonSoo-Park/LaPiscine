CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDE = -Iincludes/

SRC_DIR = srcs

OBJ_DIR = srcs

NAME = bsq

SRCS = $(SRC_DIR)/core.c $(SRC_DIR)/ft_free.c $(SRC_DIR)/info.c $(SRC_DIR)/info2.c $(SRC_DIR)/info3.c $(SRC_DIR)/main.c $(SRC_DIR)/solution.c $(SRC_DIR)/utilities.c

$(INFO $(SRCS))

OBJS = $(SRCS:c=o)

OBJECTS = $(patsubst %.o,%.o,$(OBJS))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
