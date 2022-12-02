# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 17:14:54 by nhwang            #+#    #+#              #
#    Updated: 2022/11/15 17:14:55 by nhwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

SRCS	= megaphone.cpp

# OBJS	= $(SRCS:.c=.o)

OBJS	= megaphone.o

NAME	= megaphone

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
