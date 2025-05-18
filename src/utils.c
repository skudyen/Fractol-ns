#include "../includes/fractol.h"
#include <unistd.h>

static void check_name(t_fractol *f, char *argv)
{
    int c;
    
    c = 0;
    
    while (argv[c])
    {
        argv[c] = ft_tolower(argv[c]);
        c++;
    }
    if(!ft_strncmp("mandelbrot", argv, 10))
        f->name = MANDELBROT;
    else if(!ft_strncmp("julia", argv, 5))
        f->name = JULIA;
    else
    {
        ft_putchar_fd(ERROR_MSG, 2);
        exit(EXIT_FAILURE);
    }
}

static int is_space(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}

static int skip_space(char *str, int *is_neg)
{
    int i;

    i = 0;
    while (is_space(str[i]))
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            *is_neg *= -1;
        i++; 
    }
    return (i);
}

double ft_atof(char *str)
{
    int i;
    int is_neg;
    double d;
    double ret;
    i = skip_space(str, &is_neg);
    while (str[i] && ft_isdigit(str[i]))
    {
        ret = (ret * 10.0) + (str[i] - '0');
        i++;
    }
    if (str[i] == '-')
        i++;
    while (str[i])
    {
        ret = ret + ((str[i] - '0') * d);
        d = d * 0.1;
        i++;
    }
    if (str[i] && !ft_isdigit(str[i]))
        return (-42);
    return (ret * is_neg);
}