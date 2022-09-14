NAME 		= a.out


SRCS 		= Bureaucrat.cpp Form.cpp  PresidentialPardonForm.cpp  RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp Intern.cpp
OBJS		=  $(SRCS:.cpp=.o)


AR			=		ar rcs
CC			= 		clang++
RM 			= 		rm -f
CFLAGS 		= 		-std=c++98 -Werror -Wextra -Wall

%.o:				%.c
	@$(CC) $(CFLAGS) -c $< -o $@
all: 		$(NAME)

$(NAME):	$(OBJS)
	@echo "\n\033[1;33mCompilation de CPP05 ⌛\033[0;m\n"
	@$(AR) $(NAME) $(OBJS)
	$(CC) -o $(NAME) $(OBJS)
	@echo
	@echo "\033[1;32mCPP05 COMPILÉE ✓\n\033[0;m"


clean: 		
	@$(RM) $(OBJS)

fclean: 	clean 
	@$(RM) $(NAME)

re: 		fclean $(NAME)

.PHONY:	all clean fclean re