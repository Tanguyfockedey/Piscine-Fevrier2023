/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:02:25 by tafocked          #+#    #+#             */
/*   Updated: 2023/03/01 20:30:54 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_input(int argc, char* argv[])
{
	int	i;
	int	error;

	error = 0;
	if (argc < 2 || argv[1][0] != '-' || argv[1][1] != 'c')
	{
		write(2, "ft_tail: missing valid -c\n", 26);
		return (1);
	}
	i = -1;
	if (argv[1][2])
	{
		while(argv[1][2 + ++i])
			if (!(argv[2][i] >= '0' && argv[2][i] <= '9'))
				error = 1;
	}
	else
	{
		while (argv[2][++i])
			if (!(argv[2][i] >= '0' && argv[2][i] <= '9'))
				error = 1;
	}
	if (error)
	{
		write(2, "ft_tail: illegal offset -- ", 27);
		write(2, argv[2], i);
		write(2, "\n", 1);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = ft_check_input(argc, argv);
	if (i)
		return (1);
	i = ft_atoi(argv[2]);
	
	return (0);
}