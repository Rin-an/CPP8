CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = span

SRCS = main.cpp Span.cpp

HEADER = Span.hpp

OBJS = $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
