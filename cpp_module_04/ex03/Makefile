NAME		= a.out
SRCS		= AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp main.cpp
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

AMateria.o: AMateria.cpp AMateria.hpp ICharacter.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Ice.o: Ice.cpp Ice.hpp AMateria.hpp ICharacter.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Cure.o: Cure.cpp Cure.hpp AMateria.hpp ICharacter.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Character.o: Character.cpp Character.hpp ICharacter.hpp AMateria.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

MateriaSource.o: MateriaSource.cpp MateriaSource.hpp IMateriaSource.hpp AMateria.hpp ICharacter.hpp

main.o: main.cpp AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp
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

