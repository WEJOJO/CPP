# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 17:56:39 by nhwang            #+#    #+#              #
#    Updated: 2022/11/15 20:10:16 by nhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

HEADERS	= Account.hpp

SRCS	= tests.cpp	\
		Account.cpp


# OBJS	= $(SRCS:.c=.o)

OBJS	= tests.o	\
		Account.o

NAME	= ex02

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
