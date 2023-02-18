/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:07:24 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/18 14:11:10 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		result = ft_recursive_factorial(nb - 1) * nb;
	return (result);
}

/* 
#include <stdio.h>
int	main(void)
{
	int i = 0;
	
	while (i <= 12)
	{
		printf("!%d = %d\n", i, ft_recursive_factorial(i));
		i++;
	}
}
 */