/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:09:20 by jdesmare          #+#    #+#             */
/*   Updated: 2016/11/02 19:45:52 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	readwrite(int fd)
{
	char *buf[BUF_SIZE + 1];

	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
}

int		main(int argc, char **argv)
{
	int		fd;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		readwrite(fd);
		close(fd);
	}
	return (0);
}
