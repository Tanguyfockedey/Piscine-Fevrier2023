/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:20:59 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/25 15:06:49 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putnbr(int nb)
{
	unsigned int	unb;
	char			c;

	if (nb < 0)
		write(1, "-", 1);
	if (nb < 0)
		unb = -nb;
	else
		unb = nb;
	if (unb > 9)
	{
		ft_putnbr(unb / 10);
		unb %= 10;
	}
	c = unb + '0';
	write(1, &c, 1);
}

/* 
int	main(void)
{
	int i = -10;
	unsigned int u;

	u = i;
	ft_putnbr(-2147483648);
}
 */