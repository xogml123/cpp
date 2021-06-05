NAME = a.out
pp = clang++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(pp) $(CPPFLAGS) -o $@ $^

%.o : %.cpp
	$(pp) $(CPPFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)

re : fclean all