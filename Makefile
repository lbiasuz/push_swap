NAME	=	push_swap

NAME_B	=	checker

CC		=	cc

FLAGS	=	-Wall -Werror -Wextra -g3

SRC		=	src/actions/push.c src/actions/swap.c src/actions/rotate.c \
			src/helper.c src/index.c src/init.c src/push_swap.c src/sort.c

SRC_B	=	src_bonus/actions/push_bonus.c src_bonus/actions/swap_bonus.c src_bonus/actions/rotate_bonus.c \
			src_bonus/helper_bonus.c src_bonus/index_bonus.c src_bonus/init_bonus.c src_bonus/checker_bonus.c

OUT		=	$(SRC:.c=.o)

DEPENDENCIES	=	libft.a

$(NAME): $(DEPENDENCIES)
	$(CC) $(FLAGS) $(SRC) $(DEPENDENCIES) -o $(NAME)

all: $(NAME)

$(DEPENDENCIES):
	make -C libft/
	mv libft/libft.a libft.a

clean:
	make -C libft/ clean
	rm -f libft.a

fclean: clean
	rm -f push_swap
	rm -f checker

re: fclean all

$(NAME_B): $(DEPENDENCIES)
	$(CC) $(FLAGS) $(SRC_B) $(DEPENDENCIES) -o $(NAME_B)

bonus: $(NAME_B)
