/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:14:04 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/20 17:30:11 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min < max)
	{
		tab = malloc((max - min) * sizeof(int));
		if (!tab)
			return (0);
		i = -1;
		while (++i < max - min)
			tab[i] = min + i ;
		return (tab);
	}
	else
		return (NULL);
}

/* 
#include <stdio.h>
int main(void)
{
	int	*tab1;
	int *tab2;
	int *tab3;
	int i;

	tab1 = ft_range(0, 0);
	printf("\n%p\n", tab1);
	free(tab1);
	tab2 = ft_range(-10, 10);
	i = 0;
	while (i < 20)
	{
		printf("%d ", tab2[i]);
		i++;
	}
	free(tab2);
	tab3 = ft_range(10, -10);
	printf("\n%p", tab3);
	free(tab3);
}
 */