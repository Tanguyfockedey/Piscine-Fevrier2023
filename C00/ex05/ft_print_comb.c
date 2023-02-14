/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:24:59 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/14 18:03:32 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_abc(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 55)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_abc(a + 48, b + 48, c + 48);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
