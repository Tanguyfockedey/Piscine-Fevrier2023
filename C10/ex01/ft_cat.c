/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:11:05 by tafocked          #+#    #+#             */
/*   Updated: 2023/03/01 18:04:25 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void	ft_read_stdin(void)
{
	char	buff[30000];
	int		i;
	int		j;

	i = 1;
	while (i > 0)
	{
		i = read(0, buff, 30000);
		if (i < 0)
			return ;
		j = write(1, buff, i);
		if (j < 0)
			return ;
	}
}

void	ft_read_file(char *str)
{
	int		fd;
	char	buff[30000];
	int		i;
	int		j;

	fd = open(str, O_RDONLY);
	if (fd < 0)
		return ;
	i = 1;
	while (i > 0)
	{
		i = read(fd, buff, 30000);
		if (i < 0)
			return ;
		j = write(1, buff, i);
		if (j < 0)
			return ;
	}
	close(fd);
}

int	ft_error(char *argv)
{
	int		error;
	int		i;
	char	*str;

	if (!errno)
		return (0);
	error = errno;
	errno = 0;
	str = strerror(error);
	write(2, "./ft_cat: ", 10);
	i = 0;
	while (argv[i])
		i++;
	write(2, argv, i);
	write(2, ": ", 2);
	i = 0;
	while (str[i])
		i++;
	write(2, str, i);
	write(2, "\n", 1);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	status;

	status = 0;
	i = 0;
	if (argc == 1)
	{
		ft_read_stdin();
		status = ft_error("");
	}
	else
	{
		while (++i < argc)
		{
			if (argv[i][0] == '-')
				ft_read_stdin();
			else
				ft_read_file(argv[i]);
			status = ft_error(argv[i]);
		}
	}
	return (status);
}
