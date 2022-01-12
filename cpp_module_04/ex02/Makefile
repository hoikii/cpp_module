NAME		= a.out
SRCS		= Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADERS		= Fixed.hpp
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

Animal.o: Animal.cpp Animal.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Cat.o: Cat.cpp Cat.hpp Animal.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Dog.o: Dog.cpp Dog.hpp Animal.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Brain.o: Brain.cpp Brain.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o: main.cpp Cat.hpp Dog.hpp Animal.hpp Brain.hpp
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

