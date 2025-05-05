/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:07:14 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/05 15:44:14 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

char    *ft_program_name(int nb)
{
    if (nb == 1)
        return (MANDELBROT);
    if (nb == 2)
        return (JULIA);
}
