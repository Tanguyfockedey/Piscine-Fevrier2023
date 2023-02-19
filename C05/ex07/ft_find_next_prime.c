/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:44:15 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/19 16:17:16 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/* 
#include <stdio.h>
int	main(void)
{
	int i = 2147473647;

	while (i < 2147483647)
	{
	printf("%d : %d\n", i, ft_find_next_prime(i));
	i++;
	}
}
 */