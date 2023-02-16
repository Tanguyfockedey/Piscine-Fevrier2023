/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:08:56 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/16 13:25:17 by tfockede         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
		dest[i++] = '\0';
	dest[size - 1] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	src[] = "Strlcpy";
	char	dest1[15] = "0123456789";
	char	dest2[15] = "0123456789";
	int		size = 0;

	while (size < 10)
	{
	printf("%s\t%zu\n", dest1, strlcpy(dest1, src, size));
	printf("%s\t%d\n\n", dest2, ft_strlcpy(dest2, src, size));
	size++;
	}
}
*/