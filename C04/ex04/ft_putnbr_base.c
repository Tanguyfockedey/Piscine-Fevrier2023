/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:06:15 by tfockede          #+#    #+#             */
/*   Updated: 2023/02/18 12:22:31 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checkbase(char *base)
{
	int	baselength;
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	baselength = i;
	while (--i > 0)
	{
		j = i;
		while (--j >= 0)
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (baselength);
}

void	ft_basechange_print(unsigned int unb, char *base, int baselength)
{
	if (unb > (unsigned int)baselength - 1)
	{
		ft_basechange_print(unb / baselength, base, baselength);
		unb %= baselength;
	}
	write(1, &base[unb], 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int				baselength;
	unsigned int	unb;

	baselength = ft_checkbase(base);
	if (!baselength)
		return ;
	if (nb < 0)
		write(1, "-", 1);
	if (nb < 0)
		unb = -nb;
	else
		unb = nb;
	ft_basechange_print(unb, base, baselength);
}

/* 
int	main(void)
{
	int nb = 423836459;

	ft_putnbr_base(nb, "OI");
	write(1, "\n", 1);
	ft_putnbr_base(nb, "aceloru ?");
	write(1, "\n", 1);
	ft_putnbr_base(nb, "12");
	write(1, "\n", 1);
	ft_putnbr_base(nb, "0123456789ABCDEF");
	write(1, "\n", 1);
}
 */