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
#include "ft_btree.h"

int			main(void)
{
	t_btree *node;

	node = btree_create_node("Hello world!");
	printf("%s", node->data);
	return (0);
}