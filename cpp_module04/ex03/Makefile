NAME=a.out
SRCS=main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp Unequiped.cpp
OBJS=$(SRCS:.cpp=.o)
CPPFLAGS= -Wall -W -Werror -std=c++98 -g3 -fsanitize=address
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


