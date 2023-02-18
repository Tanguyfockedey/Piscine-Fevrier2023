/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:19:56 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/18 15:47:17 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

/* 
#include <stdio.h>
int	main(void)
{
	int nb 		= -5;
	int power = -2;

	while (power <= 5)
	{
		printf("%d ^ %d = %d\n", nb, power, ft_recursive_power(nb, power));
		power++;
	}
}
 */