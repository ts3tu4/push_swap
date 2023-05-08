NAME = libftprintf.a

SRCS = ft_printf.c\
		ft_putnbr.c\
		ft_putchar.c\
		ft_putnbr_sixteen.c\
		ft_putnbr_unsigned.c\
		ft_putstr.c\
		ft_strlen.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

clean:
	rm -rf $(OBJS)


fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
