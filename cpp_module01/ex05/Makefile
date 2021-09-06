NAME=Karen
SRCS=main.cpp Karen.cpp
OBJS=$(SRCS:.cpp=.o)
CPPFLAGS=-Wall -Wextra -Werror
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


