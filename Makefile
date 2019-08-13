NAME = fractol
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o,$(wildcard *.c))
CFLAGS = -Wall -Wextra -Werror

FRAMEWORKS = OpenGL AppKit
INCLUDES = mlx libft
LIBS = ft mlx

$(NAME): obj
	@make -C mlx
	@make -C libft
	@gcc $(OBJ) -o $(NAME) $(addprefix -L./, $(INCLUDES)) $(addprefix -l, $(LIBS)) $(addprefix -framework , $(FRAMEWORKS))

obj:
	@gcc -c $(SRC) $(addprefix -I./, $(INCLUDES)) -Wall -Wextra -Werror

all: $(NAME)

clean:
	@make -C mlx clean
	@make -C libft clean
	@/bin/rm -f $(OBJ)

fclean: clean
	@make -C libft fclean
	@/bin/rm -f $(NAME)

re: fclean all