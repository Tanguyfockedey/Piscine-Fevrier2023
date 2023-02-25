/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:08:43 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/25 15:18:25 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		size;
	char	*swap;

	size = 0;
	while (tab[size])
		size++;
	j = 0;
	while (++j < size)
	{
		i = -1;
		while (++i < size - j)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
		}
	}
}

/* 
#include <stdio.h>
int main(void)
{
	char *tab[] = {"456", "abc", "123", "def", 0};
	int i = 0;

	ft_sort_string_tab(tab);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
 */