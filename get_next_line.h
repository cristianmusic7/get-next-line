/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 16:04:51 by cfranco           #+#    #+#             */
/*   Updated: 2018/03/12 16:04:53 by cfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft/includes/libft.h"

# define BUFF_SIZE 10000

typedef	struct	s_lines
{
	int			fd;
	char		*remainder;
}				t_lines;

int				get_next_line(const int fd, char **line);

#endif
