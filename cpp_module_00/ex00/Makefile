NAME		= megaphone
SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

UNAME		:= $(shell uname)
ifeq ($(UNAME),Darwin)
	CXXFLAGS	+= -D MACOS
else
	CXXFLAGS	+= -D LINUX
endif

CCBLUE		= \033[34m
CCBLUE_BOLD	= \033[1;34m
CCEND		= \033[0m

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) $(LDLIBS) -o $(NAME)
	@echo "$(CCBLUE_BOLD) >>> make $(NAME) done!  <<< $(CCEND)"

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(CCBLUE) >>> clean main projects object files. <<< $(CCEND)"
	$(RM) $(OBJS)

fclean: clean
	@echo "$(CCBLUE) >>> clean main project's executable. <<< $(CCEND)"
	$(RM) $(NAME)

re: fclean all

test: CFLAGS += -g3 -fsanitize=address
test: clean all
	@echo
	@echo "$(CCBLUE) >>> testing <<< $(CCEND)"
	./$(NAME)
	@echo 
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo 
	./$(NAME) aâãä한글źżžz
	@echo
	./$(NAME) "Chloëè öõóóośćch Saldaña ëèñ æӝӟӫ αβγδε..φχψω"

