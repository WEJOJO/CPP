# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 12:22:32 by nhwang            #+#    #+#              #
#    Updated: 2022/11/22 14:37:52 by nhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

HEADERS	= ClapTrap.hpp	\
		ScavTrap.hpp	\
		FragTrap.hpp	\
		DiamondTrap.hpp

SRCS	= main.cpp	\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp	\
		DiamondTrap.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= ex03

all:	$(NAME)

$(NAME):    $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $^

%.o : %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:
	make fclean
	make all

.PHONY : all clean fclean re
