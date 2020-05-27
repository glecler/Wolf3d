NAME 	= wolf3d
SRC 	=./srcs/main.c \
			./srcs/parsing.c \
			./srcs/parsing_check.c \
			./srcs/display.c \
			./srcs/event_hooks.c \
			./srcs/play.c \
			./srcs/raycasting.c \
			./srcs/raycasting_tools.c \
			./srcs/mlx_tools.c \
			./srcs/img_tools.c \
			./srcs/img_load.c \
			./srcs/tools.c

FLAGS 	= -Wall -Wextra -Wno-nullability-completeness
CC		= clang
	CL=\x1b[35m
	GREEN=\033[1;32m
	RED=\033[1;31m
	CL2=\x1b[36m
	NC=\033[0m

all: $(NAME)

$(NAME): $(SRC)
	@$(MAKE) -C ./includes/libft
	@$(CC) $(FLAGS) -I ./includes/minilibx_macos $(SRC) ./includes/libft/libft.a -L ./includes/minilibx_macos -lmlx -framework OpenGL -framework Appkit -o $(NAME)
	@echo "$(GREEN)[✓]$(NC)$(CL) $(NAME) built$(NC)"

clean:
	@rm -rf $(OBJ)
	@cd ./includes/libft && $(MAKE) clean
	@echo "$(RED)[-]$(NC)$(CL2) Objects of $(NAME) cleaned$(NC)"

fclean: clean
	@cd ./includes/libft && $(MAKE) fclean
	@rm -rf $(NAME)
	@echo "$(RED)[-]$(NC)$(CL2) $(NAME) cleaned$(NC)"

re: fclean all

.PHONY: test, all, $(NAME), clean, fclean, re