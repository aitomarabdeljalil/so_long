CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit
NAME	:= so_long
BNAME	:= so_long_bonus
COMMON	:= src/ft_checkone.c src/ft_checkvalidchar.c src/ft_checkwalls.c src/ft_get_map.c src/ft_isber.c src/ft_msg.c src/ft_destroy.c src/ft_exit.c
SRC		:= mandatory/ft_checkelem.c mandatory/ft_mapvalid.c mandatory/move_ply.c mandatory/reload_win.c mandatory/ft_right.c mandatory/ft_up.c mandatory/ft_down.c mandatory/ft_left.c mandatory/so_long.c
BSRC	:= bonus/ft_checkelem.c bonus/ft_mapvalid.c bonus/move_ply.c bonus/reload_win.c bonus/ft_right.c bonus/ft_up.c bonus/ft_down.c bonus/ft_left.c bonus/move_enm.c bonus/so_long_bonus.c bonus/move_enm_utils.c bonus/move_clc.c
OBJ		:= $(patsubst %.c, %.o, $(SRC))

.PHONY: all clean fclean re bonus

all: $(NAME)

bonus : $(BNAME)

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean:
	make -C libft fclean
	rm -f $(OBJ) $(NAME) $(BNAME)

re: fclean all

libft/libft.a:
	make -C libft

$(NAME): $(COMMON) $(SRC) libft/libft.a mandatory/so_long.h
	$(CC) $(CFLAGS) -o $(NAME) $(COMMON) $(SRC) libft/libft.a

$(BNAME): $(COMMON) $(BSRC) libft/libft.a bonus/so_long_bonus.h
	$(CC) $(CFLAGS) -o $(BNAME) $(COMMON) $(BSRC) libft/libft.a
