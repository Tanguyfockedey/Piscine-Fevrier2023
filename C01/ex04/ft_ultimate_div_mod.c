/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:47:50 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/15 10:50:03 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int b;

	a = 23;
	b = 5;
	printf("%d / %d = ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d rest %d\n", a, b);
}
*/