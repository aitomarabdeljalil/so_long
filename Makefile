CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit
NAME	:= so_long
SRC		:= src/ft_checkelem.c src/ft_checkvalidchar.c src/ft_checkwalls.c src/ft_down.c src/ft_get_map.c\
			src/ft_isber.c src/ft_left.c src/ft_mapvalid.c src/ft_msg.c src/ft_right.c\
			src/ft_up.c src/move_ply.c so_long.c
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
