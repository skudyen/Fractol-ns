/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg_log.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:06:14 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/05 15:46:44 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void    error_msg(t_fractal *f, char *err_str, int close)
{
    if(err_str)
        ft_putstr_fd(err_str, STDERR_FILENO);
    if(!f)
        exit(close);
}

void    guide_msg(void)
{
    ft_printf();
    
}