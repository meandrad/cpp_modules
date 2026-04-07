# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/13 12:56:17 by meandrad          #+#    #+#              #
#    Updated: 2026/03/17 19:43:26 by meandrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	ClapTrap.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re