CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDE = -Iincludes/

SRC_DIR = ./srcs

OBJ_DIR = ./srcs

TARGET = bsq

SRCS = $(notdir $(wildcard $(SRC_DIR)/*.c))

OBJS = $(SRCS:c=o)

OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))

all: $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
