
CC = clang++
CFLAGS  = -Wall -Werror -Wextra "-std=c++98"

SRC = Phonebook.cpp Person.class.cpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

NAME = phonebook

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $<

$(OBJ): $(SRC)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(NAME)

all: $(NAME)

re: fclean all