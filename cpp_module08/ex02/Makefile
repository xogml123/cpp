NAME=a.out
SRCS=main.cpp MutantStack.cpp
OBJS=$(SRCS:.cpp=.o)
CPPFLAGS= -Wall -W -Werror -std=c++98
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


