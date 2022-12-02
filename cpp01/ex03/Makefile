# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 21:24:53 by nhwang            #+#    #+#              #
#    Updated: 2022/11/16 15:29:32 by nhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

HEADERS	= Weapon.hpp	\
		HumanA.hpp	\
		HumanB.hpp	\
		Weapon.hpp

SRCS	= main.cpp	\
		Weapon.cpp	\
		HumanA.cpp	\
		HumanB.cpp


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
