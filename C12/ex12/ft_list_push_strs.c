/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:33:22 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 19:40:08 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*ft_strdup(char *str)
{
	char	*cpy;
	int		len;

	len = 0;
	while (str[len])
		len++;
	cpy = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	cpy[len] = '\0';
	while (len--)
		cpy[len] = str[len];
	return (cpy);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	char	*str;
	int		i;
	t_list	*list;
	t_list	*prev_cell;

	prev_cell = 0;
	list = 0;
	i = -1;
	while (++i < size)
	{
		str = ft_strdup(strs[i]);
		if (!str)
			return (0);
		list = ft_create_elem(str);
		if (!list)
			return (0);
		list->next = prev_cell;
		prev_cell = list;
	}
	return (list);
}

/* 
#include <stdio.h>
int main(void)
{
	char *strs[] = {"str1", "str2", "str3", "str4"};
	int size = 4;
	t_list *list;

	list = ft_list_push_strs(size, strs);

	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
}
 */