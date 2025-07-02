NAME = primis

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJTS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJTS)
	$(CXX) $(CXXFLAGS) $(OBJTS) -o $(NAME)

clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re