/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:30:07 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 14:20:53 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*cell;

	cell = ft_create_elem(data);
	if (!cell)
		return ;
	cell->next = *begin_list;
	*begin_list = cell;
}

/* 
#include <stdio.h>
int main(void)
{
	t_list *cell1 = 0;
	t_list **list = &cell1;
	char *str1 = "string 1";
	char *str2 = "string 2";

	cell1 = ft_create_elem(str1);
	printf("cell 1 : %s\n", cell1->data);
	ft_list_push_front(list, str2);
	printf("list 1 : %s\n", (*list)->data);
//	*list = (*list)->next;
	printf("list 2 : %s\n", (*list)->next->data);
}
 */