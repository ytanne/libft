/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 18:58:50 by mstupnik          #+#    #+#             */
/*   Updated: 2019/10/24 17:42:04 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

static int		aline(char **fd_s, char **line)
{
	int		len;
	char	*temp;

	len = 0;
	while ((*fd_s)[len] != '\n' && (*fd_s)[len] != '\0')
		len++;
	if ((*fd_s)[len] == '\n')
	{
		*line = ft_strsub(*fd_s, 0, len);
		temp = ft_strdup(&(*fd_s)[len + 1]);
		free(*fd_s);
		*fd_s = temp;
		if ((*fd_s)[0] == '\0')
			ft_strdel(fd_s);
	}
	else
	{
		*line = ft_strdup(*fd_s);
		ft_strdel(fd_s);
	}
	return (1);
}

static int		r_check(char **fd_s, char **line, int r, int fd)
{
	if (r < 0)
		return (-1);
	else if (r == 0 && fd_s[fd] == NULL)
		return (0);
	else
		return (aline(&fd_s[fd], line));
}

static char		**s_check(char *temp, char *buf, char **fd_s, int fd)
{
	if (fd_s[fd] == NULL)
		fd_s[fd] = ft_strdup(buf);
	else
	{
		temp = ft_strjoin(fd_s[fd], buf);
		free(fd_s[fd]);
		fd_s[fd] = temp;
	}
	return (&fd_s[fd]);
}

int				get_next_line(const int fd, char **line)
{
	int			r;
	char		buf[BUFF_SIZE + 1];
	char		*temp;
	static char	*fd_s[FD_SIZE];

	if (line == NULL || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	temp = NULL;
	while ((r = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[r] = '\0';
		s_check(temp, buf, fd_s, fd);
		if (ft_strchr(fd_s[fd], '\n'))
			break ;
	}
	return (r_check(fd_s, line, r, fd));
}
