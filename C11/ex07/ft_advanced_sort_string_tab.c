/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:19:16 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/26 12:51:10 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
		}
	}
}

/* 
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (-(s1[i] - s2[i]));
}

#include <stdio.h>
int main(void)
{
	int (*f)(char *, char *) = &ft_strcmp;
	char *tab[] = {"456", "abc", "123", "def", 0};
	int i = 0;

	ft_advanced_sort_string_tab(tab, (*f));
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
 */