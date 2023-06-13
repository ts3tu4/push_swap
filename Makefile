NAME = push_swap

SRCS = main.c \
		src/check_input/check_input.c\
		src/check_input/coordinate_compression.c\
		src/error_free/ft_free.c\
		src/error_free/ft_error.c\
		src/make_list/ft_makelist.c\
		src/make_list/push_swap_atoi.c\
		src/check_input/coordinate_compression_utils.c\
		src/make_list/makelist_utils.c

CC = cc

HEAD_FILE = include/push_swap.h
INCLUDES = -I./include -I./libft
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(PRINTF_DIR)
	cc -o $(NAME)  $(OBJS) $(LIBFT) $(PRINTF) $(INCLUDES)

$(OBJS): %.o: %.c $(HEAD_FILE)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	rm -rf $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(PRINTF_DIR)

fclean: clean
	rm -rf $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) fclean -C $(PRINTF_DIR)
re:fclean all
	

.PHONY: all clean fclean re