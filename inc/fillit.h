/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumiguel <jumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 15:09:14 by jumiguel          #+#    #+#             */
/*   Updated: 2016/11/20 18:10:07 by jumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../libft/includes/libft.h"

# define BUFF_SIZE	((21 * 27) + 1)

typedef	struct		s_struct
{
	int				line;
	int				col;
	int				**tab;
	int				tabhash[4];
	int				nbrtetro;
	int				counti;
	int				nbrhash;
	int				i;
	int				x;
	int				y;
	char			*mapmax;
	int				power;
	int				mapopti;
	int				c;
	int				ctetro;
	int				d;
}					t_struct;

void				ft_init(t_struct *global);
int					ft_error(int n);
int					ft_tetrosvalid(char *buf, t_struct *global);
int					check_line(char *buf);
int					ft_linesvalid(char *buf, t_struct *global);
int					ft_resolve(t_struct *global);
int					ft_remove(t_struct *global);
void				ft_reset(t_struct *global);
void				ft_adaptcoordo(t_struct *global);
int					ft_mapopti(t_struct *global);

#endif
