/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:04:15 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/19 12:47:52 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	int i = 0;
	while (i <= 12)
	{
		printf("!%d = %d\n", i, ft_iterative_factorial(i));
		i++;
	}
}
*/