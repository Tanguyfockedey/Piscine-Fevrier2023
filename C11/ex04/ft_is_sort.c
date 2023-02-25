/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:29:32 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/25 12:57:52 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
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
	int tab[] = {0, 1, 2, 3, 4};
	int length = 5;
	int (*f)(int, int) = &ft_is_smaller;

	printf("%d\n", ft_is_sort(tab, length, (*f)));
}
 */