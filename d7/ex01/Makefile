all : iter

iter : iter.cpp
	clang++ -Wall -Werror -Wextra -std=c++98 iter.cpp -o iter 

clean:
	rm -rf iter

fclean: clean

re: fclean all
