/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:30:07 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/26 14:06:16 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_cell;

	new_cell = ft_create_elem(data);
	if (!new_cell)
		return ;
	new_cell->next = *begin_list;
	*begin_list = new_cell;
}


#include <stdio.h>
int main(void)
{
	t_list *cell1;
	t_list **list = &cell1;
	char *str1 = "string 1";
	char *str2 = "string 2";

	cell1 = ft_create_elem(str1);
	ft_list_push_front(list, str2);
	//printf("%s\n%s\n", list->data, list->next->data);

}