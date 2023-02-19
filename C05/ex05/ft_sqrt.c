/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:59:05 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/19 16:39:49 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (nb / i >= i)
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
	int i = 2147483647;

//	printf("La racine carrée de %d vaut %d !\n", i, ft_sqrt(i));

 	while (i <= 1000000)
	{
		if (ft_sqrt(i) != 0)
			printf("La racine carrée de %d vaut %d !\n", i, ft_sqrt(i));
//		ft_sqrt(i);
		i++;
	} 
}
 */