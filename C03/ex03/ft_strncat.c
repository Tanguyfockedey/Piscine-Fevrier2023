/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:52:50 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/16 15:54:03 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest [100] = "This is a ";
	char	dest1 [100] = "This is a ";
	char	src[] = "test string !";
	char	src1[] = "test string !";

	printf("%s\n%s\n", dest, src);
	ft_strncat(dest, src, 10);
	printf("%s\n", dest);
	printf("%s\n", strncat(dest1, src1, 10));
}
*/