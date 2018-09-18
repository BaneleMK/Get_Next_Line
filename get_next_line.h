/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmkhize <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 14:01:29 by bmkhize           #+#    #+#             */
/*   Updated: 2018/07/03 14:08:09 by bmkhize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 32

typedef struct		s_some
{
	char			buff[BUFF_SIZE + 1];
	char			*newline;
	char			**lines;
	int				strnew;
	long			ret;
	long			prv_fd;
	int				fdini;
	size_t			i;
	size_t			st;
}					t_some;

int					get_next_line(const int fd, char **lines);

#endif
