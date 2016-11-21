/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumiguel <jumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 18:10:08 by jumiguel          #+#    #+#             */
/*   Updated: 2016/11/21 14:28:49 by jumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int		check_line(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (buf[i + 19] != '\n' && buf[i + 19] != '\0')
			return (1);
		i += 20;
	/*	ft_putchar(buf[i]);
		ft_putnbr(i);
		ft_putchar('\n');*/
	}
	return (0);
}
