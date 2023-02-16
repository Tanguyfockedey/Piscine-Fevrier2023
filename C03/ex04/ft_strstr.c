/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:58:13 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/16 16:11:18 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (&str[i]);
			j++;
		}	
		i++;
	}
	return (0);
}

/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "This is the string to search";
	char	*to_find = "";
	char	*result;

//	result = strstr(str, to_find);
	result = ft_strstr(str, to_find);
	printf("%s\n%s\n%s\n", str, to_find, result);
}
 */