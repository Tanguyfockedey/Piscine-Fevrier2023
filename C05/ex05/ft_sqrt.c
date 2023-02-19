/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:59:05 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/19 13:50:29 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb && i <= 46340)
	{
		if (nb / i == i && nb % i == 0)
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