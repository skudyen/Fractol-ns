/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:17:57 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 15:47:25 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../MLX42/include/MLX42/MLX42.h"
# include "../MLX42/include/MLX42/MLX42_Int.h"
# include "../lib/libft.h"
# include "../lib/ft_printf.h"
# include <math.h>
# include <stdlib.h>
# include <unistd.h>

# define ERROR_MSG "|---------- ERROR ----------|\n|------Please Enter ,Mandelbrot or julia" 
# define WIDTH 800
# define HEIGHT 800

# define MANDELBROT 1
# define JULIA 2
# define TRICORN 3

typedef struct s_complex
{
    double re;
    double im;
} t_complex;


typedef struct s_img
{
    mlx_t   *mlx;
    mlx_image_t   *img;
} t_img;

typedef struct s_fractol
{
    t_img   img;
    char*  name;
    int x;
    int y;
    double j_x;
    double j_y;
    int error;

} t_fractol;



#endif