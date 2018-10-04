/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:28:55 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/02 11:33:27 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree				*btree_create_node(void *data)
{
	t_btree	*node;

	if (!(node = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	node->parent = NULL;
	node->right = NULL;
	node->left = NULL;
	node->data = data;
	return (node);
}
