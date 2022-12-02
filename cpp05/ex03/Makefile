CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
RM	= rm -f

HEADERS	= Bureaucrat.hpp	\
		Form.hpp	\
		PresidentialPardonForm.hpp	\
		RobotomyRequestForm.hpp	\
		ShrubberyCreationForm.hpp	\
		Intern.hpp

SRCS	= main.cpp	\
		Bureaucrat.cpp	\
		Form.cpp	\
		PresidentialPardonForm.cpp	\
		RobotomyRequestForm.cpp	\
		ShrubberyCreationForm.cpp	\
		Intern.cpp

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
