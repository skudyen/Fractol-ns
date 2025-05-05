/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:06:36 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/05 18:51:02 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void    init_fractal(t_fractal *f);
{
    f->mlx = mlx_init(WIDTH, HEIGHT, "Mandelbrot", false);
    mlx_loop();
}