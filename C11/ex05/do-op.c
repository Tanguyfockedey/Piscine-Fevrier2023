/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:50:49 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/25 14:40:16 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	ft_op(int a, char op, int b)
{
	void	(*op_tab[5])(int, int);
	char	*str;
	int		i;

	str = "+-*/%";
	op_tab[0] = &ft_add;
	op_tab[1] = &ft_sub;
	op_tab[2] = &ft_mult;
	op_tab[3] = &ft_div;
	op_tab[4] = &ft_mod;
	i = 0;
	while (op != str[i])
		i++;
	(*op_tab[i])(a, b);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	if (argc != 4)
		return (1);
	if (argv[2][1] || (argv[2][0] != '+' && argv[2][0] != '-'
		&& argv[2][0] != '/' && argv[2][0] != '*' && argv[2][0] != '%'))
	{
		write(1, "0\n", 2);
		return (1);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_op(a, argv[2][0], b);
	write(1, "\n", 1);
	return (0);
}
