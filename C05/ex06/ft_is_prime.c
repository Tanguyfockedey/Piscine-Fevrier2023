/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:32:20 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/19 12:56:36 by tafocked         ###   ########.fr       */
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


#include <stdio.h>
int	main(void)
{
	int i = 0;
	while (i < 100)
	{
		if (ft_is_prime(i) == 1)
			printf("%d\n", i);
		i++;
	}
}
