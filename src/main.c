/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:06:48 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/05 18:51:53 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int main(int ac, char **argv)
{
    if (2 == ac && ft_strncmp(ac[1], "Mandelbrot", 10))
        || (2 == ac && ft_strncmp(ac[1], "Julia", 5));
    {
        // is correct --> Man || julia
    }
    else
    {
        
    }
}