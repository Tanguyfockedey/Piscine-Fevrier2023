/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:34:08 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/15 12:58:47 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int t;
	int i;

	i = 0;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = t;
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int tab[] = {0,1,2,3,4,5,6,7,8, 9, 10};
	int i = 0;
	int size = 11;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/