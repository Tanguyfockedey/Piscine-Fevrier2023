/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:17:11 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/18 13:51:14 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* 
#include <stdio.h>
int	main(void)
{
	char	str[] = "This is a test string";
	int x;

	x = ft_strlen(str);
	printf("Test string is %d characters long\n", x);
}
 */