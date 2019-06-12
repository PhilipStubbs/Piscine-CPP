
CC = clang++
CFLAGS  = -Wall -Werror -Wextra "-std=c++98"

SRC = main.cpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

NAME = convert

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $(SRC) -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(NAME)

all: fclean $(NAME)