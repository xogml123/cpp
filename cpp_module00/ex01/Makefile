NAME = a.out
pp = clang++
CPPFLAGS = -Wall -Wextra -Werror
CPP17= -std=c++17
SRCS = My_Awesome_PhoneBook.cpp contact.cpp phonebook.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(pp) $(CPPFLAGS) -o $@ $^

%.o : %.cpp
	$(pp) $(CPPFLAGS) -c $< -o $@ $(CPP17)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)

re : fclean all
