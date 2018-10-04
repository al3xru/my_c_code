/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:24:18 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/02 11:50:29 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct			s_btree
{
	struct s_btree		*parent;
	struct s_btree		*right;
	struct s_btree		*left;
	void				*item;
}						t_btree;

t_btree					*btree_create_node(void *data);
#endif
