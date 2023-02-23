/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:26:58 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/23 18:47:02 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = -1;
	while (++i < length)
		(*f)(tab[i]);
}

/* 
#include <stdio.h>
void	ft_mult(int i)
{
	printf("%d\n", i * 2);
}

int	main(void)
{
	int tab[] = { 1, 2, 3, 4, 5};
	void (*f)(int) = &ft_mult;

	ft_foreach(tab, 5, *f);
}
 */