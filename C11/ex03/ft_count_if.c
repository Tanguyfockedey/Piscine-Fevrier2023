/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:11:29 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/25 12:57:45 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (++i < length)
	{
		if ((*f)(tab[i]))
			count++;
	}
	return (count);
}

/* 
int ft_alpha(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
		return (1);
	return (0);
}

#include <stdio.h>
int main(void)
{
	char *tab[] = {"word", "Word", "123", "alpha", ""};
	int length = 5;
	int (*f)(char *) = &ft_alpha;

	printf("%d\n", ft_count_if(tab, length, (*f)));
	return (0);
}
 */