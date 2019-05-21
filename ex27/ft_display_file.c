/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:32:46 by klekisha          #+#    #+#             */
/*   Updated: 2019/04/08 18:41:57 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

int		checking(int argc)
{
	if (argc <= 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	else
		return (1);
}

int		check_fd(int fd)
{
	if (fd == -1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}

void	read_and_write(int fd)
{
	char	buf;

	while (read(fd, &buf, 1))
		write(1, &buf, 1);
}

int		main(int argc, char **argv)
{
	int fd;

	if (checking(argc) == 0)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	if (check_fd(fd) == 0)
		return (0);
	read_and_write(fd);
	if (check_fd(close(fd)) == 0)
		return (-1);
	return (0);
}
