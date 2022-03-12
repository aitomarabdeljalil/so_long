CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
NAME	:= libft.a
SRC		:= ft_itoa.c ft_split.c ft_strlcpy.c ft_strncmp.c get_next_line.c ft_memcpy.c ft_strdup.c  ft_strndup.c ft_strjoin.c ft_strlen.c ft_strrchr.c ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c
OBJ		:= $(patsubst %.c, %.o, $(SRC))

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_BN)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar cr $(NAME) $(OBJ)
