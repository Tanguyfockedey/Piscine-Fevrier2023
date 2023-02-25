/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:47:15 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/25 12:57:31 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = malloc(length * sizeof(int));
	if (!result)
		return (0);
	i = -1;
	while (++i < length)
		result[i] = (*f)(tab[i]);
	return (result);
}

/* 
int	ft_mult(int i)
{
	return (i * 2);
}

#include <stdio.h>
int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int (*f)(int) = &ft_mult;
	int *result;
	int i = 0;

	result = ft_map(tab, 5, *f);
	while (i < 5)
		printf("%d\n", result[i++]);

}
 */