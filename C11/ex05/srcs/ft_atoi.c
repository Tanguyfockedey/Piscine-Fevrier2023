/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:45:22 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/18 11:56:31 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_prestr(char *str, int *sign)
{
	int	i;

	*sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			*sign *= -1;
	}
	return (&str[i]);
}

int	ft_atoi(char *str)
{
	int				sign;
	int				i;
	unsigned int	unb;
	unsigned int	mult10;

	i = 0;
	unb = 0;
	mult10 = 1;
	str = ft_prestr(str, &sign);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (i > 0)
	{
		i--;
		unb = unb + (str[i] - '0') * mult10;
		mult10 *= 10;
	}
	return (sign * unb);
}

/* 
#include <stdio.h>
int	main(void)
{
	char str[] = "\n	+--+-2147483648.test";

	printf("%s\n%d\n", str, ft_atoi(str));
}
 */