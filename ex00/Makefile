CPP = c++
CPPFLAGS = -Wall -Wextra -Werror

NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@



clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
