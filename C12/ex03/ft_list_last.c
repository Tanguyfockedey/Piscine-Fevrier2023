/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:50:35 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 16:18:00 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

/* 
#include <stdio.h>
int main(void)
{
	t_list *cell = 0;
	t_list **list = &cell;

	ft_list_push_front(list, "str3");
	ft_list_push_front(list, "str2");
	ft_list_push_front(list, "str1");
	
	printf("cell = %s | %p\n", cell->data, cell->next);
	cell = ft_list_last(cell);
	
	printf("list = %s | %p\n", (*list)->data, (*list)->next);
	printf("cell = %s | %p\n", cell->data, cell->next);
}
 */