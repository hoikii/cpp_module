NAME		= a.out
SRCS		= Bureaucrat.cpp Form.cpp main.cpp \
			  concrete_forms/ShrubberyCreationForm.cpp \
			  concrete_forms/RobotomyRequestForm.cpp \
			  concrete_forms/PresidentialPardonForm.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADERS		= Bureaucrat.hpp Form.hpp
FRMS		= concrete_forms/
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

CCBLUE		= \033[34m
CCBLUE_BOLD	= \033[1;34m
CCEND		= \033[0m

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) $(LDLIBS) -o $(NAME)
	@echo "$(CCBLUE_BOLD) >>> make $(NAME) done!  <<< $(CCEND)"

Bureaucrat.o: Bureaucrat.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

Form.o: Form.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(FRMS)ShrubberyCreationForm.o: $(FRMS)ShrubberyCreationForm.cpp $(FRMS)ShrubberyCreationForm.hpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(FRMS)RobotomyRequestForm.o: $(FRMS)RobotomyRequestForm.cpp $(FRMS)RobotomyRequestForm.hpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(FRMS)PresidentialPardonForm.o: $(FRMS)PresidentialPardonForm.cpp $(FRMS)PresidentialPardonForm.hpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o: main.cpp $(HEADERS) $(FRMS)*.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(CCBLUE) >>> clean main projects object files. <<< $(CCEND)"
	$(RM) $(OBJS)

fclean: clean
	@echo "$(CCBLUE) >>> clean main project's executable. <<< $(CCEND)"
	$(RM) $(NAME)

re: fclean all

test: CXXFLAGS += -g3 -fsanitize=address
test: clean all

