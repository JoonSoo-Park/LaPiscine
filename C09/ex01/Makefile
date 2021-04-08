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
	find . -type f \( -name "*.o" -o -name "*.d" \) -delete
