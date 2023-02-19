/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:12:47 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/19 12:47:32 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		result *= nb;
	return (result);
}

/* 
#include <stdio.h>
int	main(void)
{
	int nb 		= 5;
	int power = -2;

	while (power <= 100000)
	{
		ft_iterative_power(nb, power);
	//	printf("%d ^ %d = %d\n", nb, power, ft_iterative_power(nb, power));
		power++;
	}
}
 */