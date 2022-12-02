# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 20:57:15 by nhwang            #+#    #+#              #
#    Updated: 2022/11/16 15:28:25 by nhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

OBJS	= main.o

NAME	= ex02

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
