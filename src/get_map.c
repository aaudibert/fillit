/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumiguel <jumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 15:19:49 by jumiguel          #+#    #+#             */
/*   Updated: 2016/11/20 16:01:25 by jumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

void	ft_adaptcoordo(t_struct *global)
{
	global->y = 0;
	while (global->y < global->nbrtetro)
	{
		global->x = 1;
		while (global->x <= 3)
		{
			if (global->tab[global->y][global->x] == 1)
				global->x++;
			else
			{
				global->tab[global->y][global->x] =
					global->tab[global->y][global->x] -
					(global->col - global->power);
				global->x++;
			}
		}
		global->y++;
	}
	global->col = global->power;
}

int		ft_mapopti(t_struct *global)
{
	int	i;

	i = 0;
	global->x = 0;
	while (global->power * global->power < global->nbrtetro * 4)
		global->power++;
	global->mapopti = global->power * global->power + global->power;
	while (i < global->mapopti)
	{
		if (global->x == global->power)
		{
			global->mapmax[i] = '\n';
			i++;
			global->x = 0;
		}
		else
		{
			global->mapmax[i] = '.';
			i++;
			global->x++;
		}
	}
	global->mapmax[i] = '\0';
	return (global->mapopti);
}
