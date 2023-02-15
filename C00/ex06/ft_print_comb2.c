/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:10:38 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/15 08:55:31 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_ab(char a1, char a2, char b1, char b2)
{
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (a1 != 9 + '0' || a2 != 8 + '0')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = -1;
	while (++a < 99)
	{
		b = a;
		while (++b < 100)
			ft_print_ab(a / 10 + '0', a % 10 + '0', b / 10 + '0', b % 10 + '0');
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/