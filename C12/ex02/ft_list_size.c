/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:03:47 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 13:48:35 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

/* 
#include <stdio.h>
int main(void)
{
	t_list	*cell = 0;
	t_list	**list = &cell;

	cell = ft_create_elem("str 3");
	ft_list_push_front(list, "str 2");
	ft_list_push_front(list, "str 1");
	printf("list 1: %s\nlist 2: %s\nlist 3: %s\n", 
		(*list)->data, (*list)->next->data, (*list)->next->next->data);
//	printf("%p\n", cell->next);
	printf("size = %d\n", ft_list_size(*list));
}
 */