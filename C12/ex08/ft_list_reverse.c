/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:58:27 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 22:06:38 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
	if ()
}


#include <stdio.h>
int main(void)
{
	t_list *list;
	t_list *start;
	char *strs[] = {"0", "1", "2", "3", "4"};

	list = ft_list_push_strs(5, strs);
	start = list;
	while (start)
	{
		printf("%s -> ", start->data);
		start = start->next;
	}

}