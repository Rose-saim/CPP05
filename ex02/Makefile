SRCS 		= Bureaucrat.cpp Form.cpp  PresidentialPardonForm.cpp  RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)

GCC			= c++
RM 			= rm -f
FLAGS 		= -std=c++98 -Werror -Wextra -Wall

NAME 		= a.out


all: 		$(NAME)

$(NAME): 	$(OBJS)
			$(GCC) $(FLAGS) -o $(NAME) $(OBJS) 

clean: 		
			$(RM) $(OBJS)

fclean: 	clean 
				rm -f $(NAME)

re: 		fclean $(NAME)

.PHONY:	all clean fclean re test
