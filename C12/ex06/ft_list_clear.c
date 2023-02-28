/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:16:44 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 21:24:42 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*next_cell;

	while (begin_list)
	{
		next_cell = begin_list->next;
		(*free_fct)(begin_list->data);
		free(begin_list);
		begin_list = next_cell;
	}
}

/* 
void ft_free_str(void *str)
{
	free(str);
}

#include <stdio.h>
int main(void)
{
	t_list	*cell = 0;
	t_list	*begin_list;
	void	(*free)(void *) = &ft_free_str;
	char	*strs[] = {"str1", "str2", "str3", "str4"};

	cell = ft_list_push_strs(4, strs);
	begin_list = cell;
	
	while ((cell))
	{
		printf("%s\n", cell->data);
		cell = cell->next;
	}
	ft_list_clear(begin_list, (*free));
}
 */