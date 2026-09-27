/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    :+:      :+:    :+:   */
/*   By: student <student@42.fr>                     +:+  +:+       +:+        */
/*                                                #+#+# Kramer +#+#           */
/*   Created: 2026/09/21 20:37:00 by student           #+#    #+#             */
/*   Updated: 2026/09/21 20:37:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int	display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd("Cannot read file\n", 2);
		return (0);
	}
	bytes_read = read(fd, buffer, BUF_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUF_SIZE);
	}
	if (bytes_read < 0)
	{
		ft_putstr_fd("Cannot read file\n", 2);
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_fd("File name missing.\n", 2);
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr_fd("Too many arguments.\n", 2);
		return (0);
	}
	display_file(argv[1]);
	return (0);
}
