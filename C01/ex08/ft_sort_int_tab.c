/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:00:54 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/15 14:01:46 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	j = 0;
	while (++j < size)
	{
		i = 0;
		while (i < size - j)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {10,0,1,4,7,2,5,8,3,6,9};
	int	size = 11;
	int	i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/