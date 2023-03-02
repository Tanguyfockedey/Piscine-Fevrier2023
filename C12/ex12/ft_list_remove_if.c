/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:07:49 by tafocked          #+#    #+#             */
/*   Updated: 2023/03/02 20:18:06 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
							int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*start;

	(void) free_fct;
	start = *begin_list;
	while (start)
	{
		if (!cmp(start->data, data_ref))
		{
			printf("%s -> ", start->data);
		}
		start = start->next;
	}
}

void	ft_free(void *str)
{
	free(str);
}

int	ft_cmp(void *p1, void *p2)
{
	char *str1 = p1;
	char *str2 = p2;
	return (str1[0] - str2[0]);
}


#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"s1", "S2", "s3", "S4"};
	t_list	*list = ft_list_push_strs(4, strs);
	t_list	*start = list;
	char	*str = "S";

	while (start)
	{
		printf("%s -> ", start->data);
		start = start->next;
	}
	printf("0x0\n");
	ft_list_remove_if(&list, str, &ft_cmp, &ft_free);
	printf("\n");
	start = list;
	while (start)
	{
		printf("%s -> ", start->data);
		start = start->next;
	}
	printf("%p", start);
}