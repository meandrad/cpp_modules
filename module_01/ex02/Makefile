# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/10 11:29:38 by meandrad          #+#    #+#              #
#    Updated: 2026/03/10 11:29:56 by meandrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \

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