/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:30:57 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/20 18:41:57 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min < max)
	{
		range[0] = malloc((max - min) * sizeof(int));
		if (!range[0])
			return (-1);
		i = -1;
		while (++i < max - min)
			range[0][i] = min + i;
		return (max - min);
	}
	else
	{
		range[0] = NULL;
		return (0);
	}
}

/* 
#include <stdio.h>
int main(void)
{
	int	*tab1[1];
	int *tab2[1];

	int i = 0;
	int a = 1;
	int b = 11;
	int c, c2;

	c = ft_ultimate_range(tab1, a, b);
	c2 = ft_ultimate_range(tab2, 0, 0);
	while (i < b - a)
	{
		printf("%d ", tab1[0][i]);
		i++;
	}
	printf("\nReturn is : %d", c);
	printf("\n%p\nReturn is : %d\n", tab2[0], c2);
	free(tab1[0]);
	//free(tab2[0]);
}
 */