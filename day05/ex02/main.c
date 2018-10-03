/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:12:16 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 18:11:54 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int		ft_atoi(char *str);

int		main(void)
{
	char *str = "	\t 32dfdf";
	char *str2 = "+3d";

	
	printf("%d", ft_atoi(str));
	printf("\n");
	printf("%d", atoi(str));
	printf("\n");

	printf("%d", ft_atoi(str2));
	printf("\n");
	printf("%d", atoi(str2));
	printf("\n");
	return(0);
}
