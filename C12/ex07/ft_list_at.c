/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:26:02 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 21:49:48 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while ( nbr--)
	{
		if (!begin_list)
			return (0);
		begin_list = begin_list->next;
	}
	return (begin_list);
}

/* 
#include <stdio.h>
int main(void)
{
	t_list	*list;
	t_list	*start;
	char	*strs[] = {"4", "3", "2", "1", "0"};

	list = ft_list_push_strs(5, strs);
	start = list;
	while (start)
	{
		printf("%s -> ", start->data);
		start = start->next;
	}
	start = ft_list_at(list, 4);
	if (!start)
		printf("\n%p", start);
	else
		printf("\n%s", start->data);
}
 */