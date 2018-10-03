/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:32:58 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/02 11:35:24 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int			main(void)
{
	t_list *elem;

	elem = ft_create_elem("Hello world!");
	printf("%s", elem->data);
	return (0);
}