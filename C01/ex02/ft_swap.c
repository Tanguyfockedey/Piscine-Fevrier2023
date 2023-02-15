/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:34:19 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/15 10:43:14 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

/*
#include <stdio.h>
int	main(void)
{
	int a = 10;
	int b = 20;

	printf("%d	%d\n",a ,b);
	ft_swap( &a, &b);
	printf("%d	%d\n",a ,b);
}
*/