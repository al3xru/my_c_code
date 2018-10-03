/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 10:19:51 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/25 11:41:08 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_strncat(char *dest, char *src, int nb);

int		main(void) 
{
	char	*src = "World!";
	char	dest[] = "Hell";

	ft_strncat(dest, src, 9);

	printf("%s", dest);
	return (0);
}
