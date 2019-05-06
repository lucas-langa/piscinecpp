NAME = megaphone

SRC  = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(SRC)
	clang++ $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf megaphone

fclean: clean

re: fclean all
