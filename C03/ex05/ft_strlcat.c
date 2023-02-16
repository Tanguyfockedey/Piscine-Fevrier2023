/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:12:06 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/16 18:56:39 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	if (size == 0)
		return (ft_strlen(src));
	if (size <= ft_strlen(dest))
		result = size + ft_strlen(src);
	else
		result = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (result);
}

/* 
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest []= "01234";
	char	src[] = "abc";
	unsigned int	i = 15;
	unsigned int	out;

//	out = strlcat(dest, src, i);
	out = ft_strlcat(dest, src, i);
	printf("%s\t%d\n", dest, out);
}
 */