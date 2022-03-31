/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:20:01 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/03/29 21:53:50 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

void	ft_read_file(char *file_name)
{
	int		fd;
	char	buff[1];
	int		r;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		exit(1);
	}
	while (1)
	{
		r = read(fd, buff, 1);
		if (r == 0)
			break ;
		if (r == -1)
			break ;
		ft_putchar2(buff[0]);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	ft_read_file(argv[1]);
	return (0);
}
