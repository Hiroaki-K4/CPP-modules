NAME := serialization

SRC := $(wildcard *.cpp)
OBJ := $(SRC:.cpp=.o)
INCLUDE := -I.

RM := rm -rf
CC := clang++
FLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug: FLAGS += -fsanitize=address
debug: re

.PHONY: all clean fclean re
