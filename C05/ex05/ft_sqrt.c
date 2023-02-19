/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:59:05 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/19 12:52:47 by tafocked         ###   ########.fr       */
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

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb && i <= 46340)
	{
		if (ft_iterative_power(i, 2) == nb)
			return (i);
		i++;
	}
	return (0);
}

/* 
#include <stdio.h>
int	main(void)
{
	int i = -10;

	printf("La racine carrée de %d vaut %d !\n", 0, ft_sqrt(0));

	while (i <= 100000)
	{
		if (ft_sqrt(i) != 0)
			printf("La racine carrée de %d vaut %d !\n", i, ft_sqrt(i));
		i++;
	}
}
 */