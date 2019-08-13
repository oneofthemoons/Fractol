/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:25:34 by hrickard          #+#    #+#             */
/*   Updated: 2019/08/13 20:25:37 by hrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTAL_H
# define FRACTAL_H
# define SUPPORTED_FRACTALS "mandelbrot"

typedef struct	s_fractal
{
	void		*mlx;
	void		*win;
}				t_fractal;

void			mandelbrot(void *mlx);

#endif
