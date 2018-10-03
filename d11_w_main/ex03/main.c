/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:32:58 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/02 12:16:17 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int			main(void)
{
	t_list *list = NULL;

	ft_list_push_front(&list, "Be-be");
	ft_list_push_back(&list, "123-123");
	ft_list_push_front(&list, "Lo-Lo");
	ft_list_push_front(&list, "Bu-Ba");
	printf("%d\n", ft_list_size(list));
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
	

	return (0);
}
