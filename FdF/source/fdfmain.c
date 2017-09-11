/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdfmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:32:30 by amkhuma           #+#    #+#             */
/*   Updated: 2017/09/11 14:32:31 by amkhuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <fcntl.h>

void	fdf(t_fdf *read)
{
	if (readline(read) == -1)
	{
		ft_putendl("ERROR!");
		return ;
	}
	mlx(read);
}

int		main(int ac, char **av)
{
	t_fdf mine;

	if (ac == 2)
	{
		mine.head = av[1];
		mine.fd = open(mine.head, O_RDONLY);
		fdf(&mine);
	}
	else
		ft_putendl("syntax ./fdf test_map");
	return (0);
}
