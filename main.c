/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrickard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:25:56 by hrickard          #+#    #+#             */
/*   Updated: 2019/08/13 20:25:58 by hrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "libft.h"
#include "fractal.h"

void	fractal_init(const char *name)
{
	void *mlx;

	mlx = mlx_init();
	if (!ft_strcmp(name, "mandelbrot"))
		mandelbrot(mlx);
	else
		ft_putendl("Incorrect input. Use \"./fractol " SUPPORTED_FRACTALS "\"");
}

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putendl("Incorrect input. Use \"./fractol " SUPPORTED_FRACTALS "\"");
		return (1);
	}
	while (--ac)
		fractal_init(av[ac]);
}
