/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:56:54 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/21 14:40:13 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strputchar(char *dest, char src)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	dest[i] = src;
	dest[i + 1] = '\0';
}

void	ft_basechange(unsigned int unb, char *base, unsigned int baselength,
	char *dest)
{
	if (unb > baselength - 1)
	{
		ft_basechange(unb / baselength, base, baselength, dest);
		unb %= baselength;
	}
	ft_strputchar(dest, base[unb]);
}

char	*ft_strdup(char *src)
{
	char	*str2;
	int		length;
	int		i;

	length = 0;
	while (src[length])
		length++;
	str2 = malloc((length + 1) * sizeof(char));
	if (!str2)
		return (0);
	i = -1;
	while (++i <= length)
		str2[i] = src[i];
	return (str2);
}

char	*ft_itoa_base(int nbr, char *base_to, int sign)
{
	char			temp[33];
	char			*result;
	int				i;
	unsigned int	baselength;

	i = 0;
	while (i < 33)
		temp[i++] = '\0';
	i = 0;
	while (base_to[i])
		i++;
	baselength = i;
	if (sign < 0 && nbr != 0)
		ft_strputchar(temp, '-');
	ft_basechange(nbr, base_to, baselength, temp);
	result = ft_strdup(temp);
	return (result);
}
