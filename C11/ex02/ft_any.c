/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:49:09 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/23 20:35:25 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int	result;
	int	i;

	result = 0;
	i = -1;
	while (tab[++i])
	{
		if ((*f)(tab[i]))
			result = 1;
	}
	return (result);
}

/* 
int ft_check(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}

#include <stdio.h>
int main(void)
{
	char *tab[4] = {"123", "456", "789", 0};
	int i;
	int (*f)(char *) = &ft_check;

	i = ft_any(tab, (*f));
	printf("%d\n", i);
}
 */