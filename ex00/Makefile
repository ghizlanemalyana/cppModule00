cmd = c++
flags = -Wall -Wextra -Werror -std=c++98
sources = megaphone.cpp
objs = $(sources:.cpp=.o)
NAME = megaphone

all: $(NAME)

$(NAME): $(objs)
	$(cmd) $(flags) $(objs) -o $(NAME)

%.o: %.cpp 
	$(cmd) $(flags) -c $< -o $@

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(NAME)

re: fclean all