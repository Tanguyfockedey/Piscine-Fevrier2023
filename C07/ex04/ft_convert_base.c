/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:56:35 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/21 21:49:57 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa_base(int nbr, char *base_to, int sign);

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = -1;
	if (!base[0] || !base[1])
		return (0);
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
	}
	while (--i > 0)
	{
		j = i;
		while (--j >= 0)
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (1);
}

char	*ft_prestr(char *str, int *sign)
{
	unsigned int	i;

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

int	ft_find_inbase(char tofind, char *base, unsigned int baselength)
{
	unsigned int	i;

	i = 0;
	while (i < baselength)
	{
		if (base[i] == tofind)
			return (i);
		i++;
	}
	return (-1);
}

unsigned int	ft_atoi_base(char *str, char *base)
{
	unsigned int	baselength;
	unsigned int	i;
	unsigned int	unb;
	unsigned int	mult;

	i = 0;
	while (base[i] != '\0')
		i++;
	baselength = i;
	i = 0;
	unb = 0;
	mult = 1;
	while (ft_find_inbase(str[i], base, baselength) >= 0)
		i++;
	while (i > 0)
	{
		i--;
		unb += ft_find_inbase(str[i], base, baselength) * mult;
		mult *= baselength;
	}
	return (unb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*result;
	unsigned int	atoi;
	int				sign;

	if (!ft_checkbase(base_from) || !ft_checkbase(base_to))
		return (0);
	nbr = ft_prestr(nbr, &sign);
	atoi = ft_atoi_base(nbr, base_from);
	if (atoi > 2147483648 || (sign > 0 && atoi > 2147483647))
		return (0);
	result = ft_itoa_base(atoi, base_to, sign);
	return (result);
}

/* 
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	nbr[] = "\t\v\n\f\r-002147483648h424234234024";
	char	base_from[] = "0123456789";
	char	base_to[] = "0123456789";
	char	*result;

	//printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	//printf("%s\n", ft_convert_base("   \t+-+--+-cffmdjbkfoyPzom", 
	//								"abcdfhjklm", "Poneygris"));
	result = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n", result);
	
	//free(result);
}
 */