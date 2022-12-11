NAME	=	push_swap

CC		=	cc

FLAGS	=	-Wall -Werror -Wextra -g3

SRC		=	actions/push.c actions/swap.c actions/rotate.c

OUT		=	$(SRC:.c=.o)

DEPENDENCIES	=	libft.a

$(NAME): $(DEPENDENCIES)
	make -C libft/ all
	mv libft/libft.a libft.a
	$(CC) $(FLAGS) $(SRC) $(DEPENDENCIES) -o $(NAME)

all: $(NAME)

clean:
	make -C libft/ clean
	rm -f $(DEPENDENCIES)

fclean: $(DEPENDENCIES)
	rm -f push_swap
