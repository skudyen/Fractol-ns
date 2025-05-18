#include "../includes/fractol.h"

int main(int ac,char **argv)
{
    t_fractol   fractol;
    t_img   img;
    
    img.mlx = mlx_init(WIDTH, HEIGHT, "Fract-ol", false);
    img.img = mlx_new_image(img.mlx, WIDTH, HEIGHT);
    if (!img.img)
        return(1);
    fractol.img = img;
}

