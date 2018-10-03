/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 14:01:35 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/01 14:08:29 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*ready;

	i = 0;
	ready = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		ready[i] = f(tab[i]);
		i++;
	}
	return (ready);
}
