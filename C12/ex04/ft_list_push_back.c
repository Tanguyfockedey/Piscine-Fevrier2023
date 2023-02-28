/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:08:50 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 16:25:08 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*cell;
	t_list	*list;

	list = *begin_list;
	cell = ft_create_elem(data);
	if (!cell)
		return ;
	if (list)
	{
		while ((list)->next)
			list = (list)->next;
		(list)->next = cell;
	}
	else
		*begin_list = cell;
}

/* 
#include <stdio.h>
int main(void)
{
	t_list	*cell = 0;
	t_list	**list = &cell;

	ft_list_push_back(list, "str1");
	ft_list_push_back(list, "str2");
	ft_list_push_back(list, "str3");
	ft_list_push_back(list, "str4");
	ft_list_push_back(list, "str5");
	ft_list_push_back(list, "str6");

	while (*list)
	{
		printf("%s\n", (*list)->data);
		*list = (*list)->next;
	}
}
 */