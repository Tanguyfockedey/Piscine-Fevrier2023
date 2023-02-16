/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:54:58 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/16 14:57:02 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest1[10];
	char src1[] = "abcdef";
	char dest2[10];
	char src2[] = "abcdef";

	ft_strcpy(dest1, src1);
	printf("%s\n", dest1);
	strcpy(dest2, src2);
	printf("%s\n", dest2);
}
*/