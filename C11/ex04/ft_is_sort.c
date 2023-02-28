/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:29:32 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 12:10:55 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	order;
	int	prev_order;

	prev_order = 0;
	i = -1;
	while (++i < length - 1)
	{
		order = (*f)(tab[i], tab[i + 1]);
		if (order > 0)
			if (prev_order < 0)
				return (0);
		if (order < 0)
			if (prev_order > 0)
				return (0);
		if (order != 0)
			prev_order = order;
	}
	return (1);
}

/* 
int ft_is_smaller(int a, int b)
{
	return (a - b);
}

#include <stdio.h>
int main(void)
{
	int tab[] = {0,0,3,0};
	int length = 1;
	int (*f)(int, int) = &ft_is_smaller;

	printf("%d\n", ft_is_sort(tab, length, (*f)));
}
 */