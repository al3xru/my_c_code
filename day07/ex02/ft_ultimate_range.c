/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 13:48:02 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/27 14:00:05 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;

	size = max - min;
	if (min >= max)
		*range = NULL;
	if (!(*range = (int *)malloc(sizeof(int) * size)))
		return (NULL);
	i = 0;
	while (min + i <= max)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (i);
}
