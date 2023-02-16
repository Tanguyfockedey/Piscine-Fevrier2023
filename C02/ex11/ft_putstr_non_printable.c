/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:26:28 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/16 15:02:22 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		j;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_putchar('\\');
			ft_putchar(str[i] / 16 + '0');
			j = str[i] % 16;
			if (j < 10)
				ft_putchar(j + '0');
			else
				ft_putchar(j - 10 + 'a');
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
int	main(void)
{
	char	*str = "Hello, \n this \t is \v a string";

	ft_putstr_non_printable(str);
}
*/