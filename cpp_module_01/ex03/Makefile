NAME		= violence
SRCS		= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)
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

main.o: main.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Weapon.o: Weapon.cpp Weapon.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

HumanA.o: HumanA.cpp HumanA.hpp Weapon.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

HumanB.o: HumanB.cpp HumanB.hpp Weapon.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

HumanC.o: HumanC.cpp HumanC.hpp Weapon.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(CCBLUE) >>> clean main projects object files. <<< $(CCEND)"
	$(RM) $(OBJS)

fclean: clean
	@echo "$(CCBLUE) >>> clean main project's executable. <<< $(CCEND)"
	$(RM) $(NAME)

re: fclean all

test: CXXFLAGS += -g3 -fsanitize=address -D DEBUG
test: clean all

