CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

HEADERS	= Bureaucrat.hpp	\
		Form.hpp

SRCS	= main.cpp	\
		Bureaucrat.cpp	\
		Form.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= ex01

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
