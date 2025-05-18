#include "../includes/fractol.h"

static void set_fractal(t_fractol *f, int ac, char **av);
static void set_julia_const(t_fractol *f, int ac, char **av);

void    parse_args(int ac, char **av, t_fractol *f)
{
    if (ac < 2)
        f->error = -1;
    else
        set_fractal(f, ac, av);
}

static void set_fractal(t_fractol *f, int ac, char **av)
{
    char *name = av[1];
    int i;

    i = 0;
    while(name[i])
    {
        name[i] = ft_tolower(name[i]);
        i++;
    }
    
    if (!ft_strncmp(name, "mandelbrot", 10))
        f->name = MANDELBROT;
    else if (!ft_strncmp(name , "julia", 5))
    {
        f->name = JULIA;
        if (ac > 2)
            set_julia_const(f, ac, av);
    }
    else
        f->error = -1;
}

static void set_julia_const(t_fractol *f, int ac, char **av)
{
    if (ac >= 4)
    {
        f->j_x = ft_atof(av[2]);
        f->j_y = ft_atof(av[3]);
        if (f->j_x < -2.0 || f->j_x > 2.0 || f->j_y < -2.0 || f->j_y > 2.0)
            f->error = -1;
    }
    else
    {
        f->j_x = -0.766667;
        f->j_y = -0.090000;
    }
}