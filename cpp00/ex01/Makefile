# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 17:56:39 by nhwang            #+#    #+#              #
#    Updated: 2022/11/15 17:56:40 by nhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

HEADERS	= Contact.hpp	\
		PhoneBook.hpp

SRCS	= main.cpp	\
		Contact.cpp	\
		PhoneBook.cpp


# OBJS	= $(SRCS:.c=.o)

OBJS	= main.o	\
		Contact.o	\
		PhoneBook.o

NAME	= PhoneBook

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $^

$(OBJS):	$(HEADERS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:
	make fclean
	make all

.PHONY : all clean fclean re
