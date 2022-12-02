# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 17:15:34 by nhwang            #+#    #+#              #
#    Updated: 2022/11/24 17:17:14 by nhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

HEADERS	= Animal.hpp	\
		Dog.hpp	\
		Cat.hpp	\
		WrongAnimal.hpp	\
		WrongCat.hpp

SRCS	= main.cpp	\
		Animal.cpp	\
		Dog.cpp	\
		Cat.cpp	\
		WrongAnimal.cpp	\
		WrongCat.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= ex00

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
