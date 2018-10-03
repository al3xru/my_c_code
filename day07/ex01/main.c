/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 17:12:47 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/27 12:55:01 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int 	*ft_range(int min, int max);

int		main(void)
{
	int		*dest = ft_range(-5, -6);

	if (dest != NULL)
		printf("%d", dest[4]);
	else
		printf("NULLED.WS");
	return (0);
}

