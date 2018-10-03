/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 12:35:28 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/27 12:49:56 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*dest;

	if (min >= max || !(dest = (int *)malloc(sizeof(int) * (max - min + 1))))
		return (NULL);
	i = 0;
	while (min + i <= max)
	{
		*(dest + i) = min + i;
		i++;
	}
	return dest;
}
