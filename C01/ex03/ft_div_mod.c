/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:43:56 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/15 10:46:43 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 23;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d rest %d\n",a , b, div, mod);
}
*/