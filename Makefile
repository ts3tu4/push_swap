NAME = push_swap

SRCS = main.c \
		src/check_input/check_input.c\
		src/check_input/c_c.c\
		src/error_free/ft_free.c\
		src/error_free/ft_error.c\
		src/make_list/ft_makelist.c\
		src/make_list/push_swap_atoi.c\
		src/check_input/c_c_utils.c\
		src/make_list/makelist_utils.c

CC = cc

HEAD_FILE = include/push_swap.h
INCLUDES = -I./include -I./libft
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

CFLAGS = -Wall -Wextra -Werror -g

OBJS = $(SRCS:.c=.o)

.SILENT:

# #debug
# NAME_DEBUG=push_swap_debug
# OBJSDIR_DEBUG=objs_debug/
# CFLAGS_DEBUG = -g -Wall -Werror -Wextra -I includes/
# OBJS_DEBUG = $(SRCS:%.c=$(OBJSDIR_DEBUG)%.o)
# LIBFTNAME_DEBUG = $(LIBFT_DIR)/libft_debug.a
# PRINTF_DEBUG = $(PRINTF_DIR)/libftprintf_debug.a
# $(LIBFTNAME_DEBUG):
# 	make -C $(LIBFT_DIR) debug
# $(PRINTF_DEBUG):
# 	make -C $(PRINTF_DIR) debug
# debug: $(NAME_DEBUG)
# $(NAME_DEBUG): $(OBJS_DEBUG) $(LIBFTNAME_DEBUG) $(PRINTF_DEBUG)
# 	$(CC) $(CFLAGS_DEBUG) $^ -o $@ $(INCLUDES)
# $(OBJSDIR_DEBUG)%.o: $(SRCSDIR)%.c
# 	@mkdir -p $(@D)
# 	$(CC) $(CFLAGS_DEBUG) -c $< -o $@ $(INCLUDES)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(PRINTF_DIR)
	cc -o $(NAME)  $(OBJS) $(LIBFT) $(PRINTF) $(INCLUDES)

$(OBJS): %.o: %.c $(HEAD_FILE)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	rm -rf $(OBJS) $(OBJSDIR_DEBUG)
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(PRINTF_DIR)

fclean: clean
	rm -rf $(NAME) $(NAME_DEBUG)
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) fclean -C $(PRINTF_DIR)
re:fclean all
	

.PHONY: all clean fclean re