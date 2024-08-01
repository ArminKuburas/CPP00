# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 03:36:09 by akuburas          #+#    #+#              #
#    Updated: 2024/08/01 04:03:47 by akuburas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Accounting
SRC=Account.cpp tests.cpp
OBJ=$(SRC:.cpp=.o)


all: $(NAME)

$(OBJ): $(SRC)
	c++ -Wall -Wextra -Werror -c $(SRC)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re