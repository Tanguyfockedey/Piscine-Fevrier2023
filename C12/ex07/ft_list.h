/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:10:25 by tafocked          #+#    #+#             */
/*   Updated: 2023/02/28 21:11:09 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H 
# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

t_list	*ft_create_elem(void *data);
t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);

#endif
