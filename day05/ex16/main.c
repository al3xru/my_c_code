/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 10:19:51 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/25 10:26:57 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_strcat(char *dest, char *src);

int		main(void) 
{
	char	*src = "World!";
	char	dest[] = "Hell";

	ft_strcat(dest, src);

	printf("%s", dest);
	return (0);
}
