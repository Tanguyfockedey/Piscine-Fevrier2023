/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:59:00 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/22 20:06:09 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i++])
			return (1);
	}
	return (0);
}

int	ft_count_substr(char *str, char *charset)
{
	int	i;
	int	substr_count;

	i = 0;
	substr_count = 0;
	while (ft_in_charset(str[i], charset) && str[i])
		i++;
	while (str[i])
	{
		while (!ft_in_charset(str[i], charset) && str[i])
			i++;
		if (ft_in_charset(str[i], charset) || !str[i])
			substr_count += 1;
		while (ft_in_charset(str[i], charset) && str[i])
			i++;
	}
	return (substr_count);
}

char	*ft_create_substr(char *str, char *charset, char **newstr)
{
	int	i;
	int	j;

	i = 0;
	while (ft_in_charset(str[0], charset))
		str++;
	while (!ft_in_charset(str[i], charset) && str[i])
		i++;
	newstr[0] = malloc((i + 1) * sizeof(char));
	if (!(newstr[0]))
		return (&str[i]);
	j = -1;
	while (++j < i)
	{
		newstr[0][j] = str[j];
	}
	newstr[0][i] = '\0';
	return (&str[i]);
}

char	**ft_split(char *str, char *charset)
{
	int		substr_count;
	int		i;
	char	**tab;

	if (!str || !charset)
		return (0);
	substr_count = ft_count_substr(str, charset);
	tab = malloc((substr_count + 1) * sizeof(char *));
	if (!tab)
		return (0);
	tab[substr_count] = 0;
	i = 0;
	while (i < substr_count)
	{
		str = ft_create_substr(str, charset, &tab[i]);
		if (!tab[i])
			return (tab);
		i++;
	}
	return (tab);
}

/* 
#include <stdio.h>
int	main(void)
{
	//This version considers the start and end as separators
	char *str = " this is a...string";
	char *sep = " .";
	char **tab;
	int i = 0;

//	str = ft_create_substr(str, sep, tab);
//	printf("%s\t%s", str, string);

//	printf("%d", ft_in_charset('\0', sep));
	tab = ft_split(str, sep);

	while (tab[i])
	{
		printf("|%s|\n", tab[i]);
		free(tab[i++]);
	}

//	printf("\n%s\t%s", tab[0], tab[1]);
//	free(tab[0]);
//	free(tab[1]);
//	printf("%p", tab[i]);
	free(tab);
} */