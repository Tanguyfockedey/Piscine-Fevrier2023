/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:15:01 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/26 13:29:17 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (!cell)
		return (0);
	cell->next = 0;
	cell->data = data;
	return (cell);
}

/* 
#include <stdio.h>
int main(void)
{
	char *str = "This is a string !";
	t_list *cell;

	cell = ft_create_elem(str);
	printf("data = %s\nnext = %p\n", cell->data, cell->next);
}
 */