# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 20:52:11 by nhwang            #+#    #+#              #
#    Updated: 2022/11/16 15:27:11 by nhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

HEADERS	= Zombie.hpp

SRCS	= main.cpp	\
		zombieHorde.cpp	\
		Zombie.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= ZombieHorde

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
