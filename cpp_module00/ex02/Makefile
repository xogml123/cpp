NAME = Account
pp = clang++
CPPFLAGS = -Wall -Wextra -Werror
CPP98= -std=c++98
SRCS = Account.cpp test.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(pp) $(CPPFLAGS) -o $@ $^

%.o : %.cpp
	$(pp) $(CPPFLAGS) -c $< -o $@ $(CPP98)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)

re : fclean all
