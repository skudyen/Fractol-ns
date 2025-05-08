NAME 			= fractal

#Path setting
SRC_Dir 		= src/
OUTPUT_Dir 		= output/
INCLUDE_Path 	= include/

MLX 			= MLX42/
MLX_BUILD_Dir 	= $(MLX)build/

LIB_PATH 		= $(INCLUDE_Path)libft/
LIB 			= $(LIB_PATH)libft.a

MLX_LIB_BUILD 	= $(MLX_BUILD_Dir)libmlx42.a -lglfw -ldl -lm -pthread

CC 				= cc
MLX_FLAGS 		= -Wunreachable-code -Ofast
C_FLAGS 		= -Wall -Werror -Wextra
INCLUDE_FLAGS 	= -I $(INCLUDE_Path) -I $(MLX)/include/MLX42

MKDIR 			= mkdir -p
RM 				= rm -f
RMDIR 			= rm -rf

FILES			= fractol_calc.c \
					init.c \
					main.c \
					color.c \
					utils.c

SRCS 			= $(addprefix $(SRC_Dir), $(FILES))
OBJS 			= $(SRCS:$(SRC_Dir)%.c=$(OUTPUT_Dir)%.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE_Path) Makefile
			@ make -s makelib

$(OUTPUT_Dir)%.o: $(SRC_Dir)%.c Makefile
			@ $(MKDIR) $(OUTPUT_Dir)
			@ $(CC) $(C_FLAGS) $(INCLUDE_FLAGS) -c $< -o $@

makelib : $(LIB_PATH) 
			@ make -sC $(LIBFT_PATH)

makemlx : 
			@ $(MKDIR) $(MLX_LIB_BUILD)
			@ cmake -Ss $(MLX42) -B $(MLX_LIB_BUILD) && make -sC $(MLX_LIB_BUILD)

clean: 
			@ $(RM) $(OBJS)
			@ make clean -sC $(LIB_PATH)

fclean: clean
			@ $(RM) $(OBJS)
			@ $(RMDIR) $(OUTPUT_Dir)
			@ make clean -sC $(LIB_PATH)

re:	fclean all

clone:
		@ git clone https://github.com/codam-coding-college/MLX42.git MLX42

.PHONY: all clean fclean re clone makemlx makelib