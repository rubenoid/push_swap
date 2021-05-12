NAME1 = checker
NAME2 = push_swap
LIBFT = ./libft

CH_SRCS = checker.c
PS_SRCS = push_swap.c sort.c sort_top_a.c sort_top_a_2.c
RAND = main.c
SRCS = moves.c moves_2.c moves_3.c list_functions.c list_functions_2.c \
		median.c print_stacks.c check.c is_ok.c terminate.c parse_helpers.c
OBJ =  moves.o moves_2.o moves_3.o list_functions.o list_functions_2.o \
		median.o print_stacks.o sort.o check.o sort_top_a.o sort_top_a_2.o \
		is_ok.o terminate.o push_swap.o checker.o main.o parse_helpers.o

FLAGS = -Wall -Wextra -Werror -fsanitize=address

CC	  = gcc

all: $(NAME1) $(NAME2) $(NAME3)

$(NAME1): $(SRCS) $(CH_SRCS)
	make -C $(LIBFT)
	$(CC) $^ -Llibft -lft -o $(NAME1) $(FLAGS)

$(NAME2): $(SRCS) $(PS_SRCS)
	make -C $(LIBFT)
	$(CC) $^ -Llibft -lft -o $(NAME2) $(FLAGS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIBFT)
	rm -f $(NAME1)
	rm -f $(NAME2)

re: fclean all
