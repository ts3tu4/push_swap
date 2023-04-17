NAME = push_swap.a

SRCS = 

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS

fclean:
	rm -rf $(NAME)

re:
	fclean all

.PHONY: all clean fclean re