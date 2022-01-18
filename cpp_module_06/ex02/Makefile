NAME		= a.out
SRCS		= main.cpp A.cpp B.cpp C.cpp
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

A.o: A.cpp A.hpp Base.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

B.o: B.cpp B.hpp Base.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

C.o: C.cpp C.hpp Base.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o: main.cpp Base.hpp A.hpp B.hpp C.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(CCBLUE) >>> clean main projects object files. <<< $(CCEND)"
	$(RM) $(OBJS)

fclean: clean
	@echo "$(CCBLUE) >>> clean main project's executable. <<< $(CCEND)"
	$(RM) $(NAME)

re: fclean all

test: CXXFLAGS += -g3 -fsanitize=address -D TEST
test: clean all

