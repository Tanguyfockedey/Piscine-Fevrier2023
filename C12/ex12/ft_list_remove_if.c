/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:07:49 by tafocked          #+#    #+#             */
/*   Updated: 2023/03/02 19:37:46 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
							int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*start;

	while (*begin_list)
	{
		if (!cmp(start->data, data_ref))
		{
			free_fct(start->data);
			
		}
	}
}

void	ft_free(void *str)
{
	free(str);
}

int	ft_cmp(void *p1, void *p2)
{
	return (p1[0] - p2[0])
}


#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"s1", "S2", "s3", "S4"};
	t_list	*list = ft_list_push_strs(3, strs);
	t_list	*start = list;
	char	*str = "s";

	while (start)
	{
		printf("%s -> ", start->data);
		start = start->next;
	}
	ft_list_remove_if(&list, str, &ft_cmp, &ft_free);
	start = list;
	printf("0x0\n");
	while (start)
	{
		printf("%s -> ", start->data);
		start = start->next;
	}
	printf("%p", start);
}