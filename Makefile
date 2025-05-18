# MLX42 Build Makefile

MLX42           = MLX42/
MLX_BUILD_Dir   = $(MLX42)build/
MLX_LIB         = $(MLX_BUILD_Dir)libmlx42.a

MKDIR           = mkdir -p
RM              = rm -f
RMDIR           = rm -rf

all: $(MLX_LIB)

$(MLX_LIB):
	@ $(MKDIR) $(MLX_BUILD_Dir)
	@ cmake -S $(MLX42) -B $(MLX_BUILD_Dir)
	@ make -sC $(MLX_BUILD_Dir)

clean:
	@ make clean -sC $(MLX_BUILD_Dir) || true

fclean:
	@ $(RMDIR) $(MLX_BUILD_Dir)

re: fclean all

.PHONY: all clean fclean re
