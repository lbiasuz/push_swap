NAME	=	push_swap

CC		=	cc

FLAGS	=	-Wall -Werror -Wextra -g3

SRC		=	src/actions/push.c src/actions/swap.c src/actions/rotate.c \
			src/helper.c src/index.c src/init.c src/mark.c src/push_swap.c

OUT		=	$(SRC:.c=.o)

DEPENDENCIES	=	libft.a

$(NAME): $(DEPENDENCIES)
	make -C libft/ all
	mv libft/libft.a libft.a
	$(CC) $(FLAGS) $(SRC) $(DEPENDENCIES) -o $(NAME)

all: $(NAME)

$(DEPENDENCIES):
	make -C libft/

clean:
	make -C libft/ clean
	rm -f $(DEPENDENCIES)

fclean: $(DEPENDENCIES)
	rm -f push_swap
