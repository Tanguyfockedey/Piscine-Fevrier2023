/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:55:49 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/20 20:12:10 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		i;

	length = 0;
	while (src[length])
		length++;
	dest = malloc((length + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = -1;
	while (++i <= length)
		dest[i] = src[i];
	return (dest);
}

/* 
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *str = "Hi ¯\\_(ツ)_/¯";
	char *str2;

//	str2 = strdup(str);
	str2 = ft_strdup(str);

	printf("%s\n%s\n", str, str2);
//	printf("%s\n", ft_strdup(""));
//	printf("%s\n", ft_strdup("this is\0 a test"));
	free(str2);
}
 */