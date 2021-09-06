NAME=a.out
SRCS=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS=$(SRCS:.cpp=.o)
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
CPP=clang++
RM=rm
all:$(NAME)

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@


