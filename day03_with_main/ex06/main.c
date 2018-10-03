/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:57:12 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/20 16:10:29 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		 ft_strlen(char *str);

int     main(void) 
{
	char *str ="Hello!";
	int strlen;

	strlen = ft_strlen(str);
	printf("%d", strlen);

    return 0;
}
