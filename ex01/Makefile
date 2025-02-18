cmd = c++
flags = -Wall -Wextra -Werror -std=c++98
sources = main.cpp Contact.cpp PhoneBook.cpp
objs = $(sources:.cpp=.o)
NAME = phonebook

all: $(NAME)

$(NAME): $(objs) 
	$(cmd) $(flags) $(objs) -o $(NAME)

%.o: %.cpp Contact.hpp PhoneBook.hpp
	$(cmd) $(flags) -c $< -o $@

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(NAME)

re: fclean all