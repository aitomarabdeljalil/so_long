CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit
NAME	:= so_long
SRC		:= ft_checkelem.c ft_checkwalls.c ft_get_map.c ft_isber.c ft_mapvalid.c ft_up.c ft_down.c so_long.c
OBJ		:= $(patsubst %.c, %.o, $(SRC))

.PHONY: all clean fclean re

all: $(NAME)

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean:
	make -C libft fclean
	rm -f $(OBJ) $(NAME) $(BNAME)

re: fclean all

libft/libft.a:
	make -C libft

$(NAME): $(SRC) libft/libft.a so_long.h
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) libft/libft.a
