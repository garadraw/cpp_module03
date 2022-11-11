NAME = ScavTrap

CC = c++

FLAGS = -Werror -Wall -Wextra -std=c++98 -g

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all $(NAME)

.PHONY: all clean fclean re