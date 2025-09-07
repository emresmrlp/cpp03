# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/06 19:16:08 by ysumeral          #+#    #+#              #
#    Updated: 2025/09/07 18:46:55 by ysumeral         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98
SRC =	main.cpp \
		ScavTrap.cpp \
		DiamondTrap.cpp \
		FragTrap.cpp \
		ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)
NAME = battle

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re