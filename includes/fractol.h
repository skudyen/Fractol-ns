/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:17:57 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/05 17:59:03 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../MLX42/include/MLX42/MLX42.h"
# include "../MLX42/include/MLX42/MLX42_Int.h"
# include "libft.h"
# include "printf.h"
# include <math.h>
# include <unistd.h>

# define WIDTH 800
# define HEIGHT 800

# define MANDELBROT 1
# define JULIA 2
# define TRICORN 3

typedef struct s_complex
{
    double  rn;
    double  in;
}   t_complex;

typedef struct s_fractal
{
    mlx_t       *mlx;
    mlx_t       *win;
    
    int         iter;
    
    double      x;
    double      y;
    
}   t_fractal;


#endif