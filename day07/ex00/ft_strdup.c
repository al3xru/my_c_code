/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 17:04:34 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/26 18:35:40 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *s)
{
	int		count;

	count = 0;
	while(*s++ != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char 	*str_temp;
	
	int		strlen;
	int		i;

	strlen = ft_strlen(src);
	if (!(str_temp = (char *) malloc(sizeof(*src) * (strlen + 1))))
		return NULL;
	i = 0;
	while (*(src + i))
	{
		*(str_temp + i) = *(src + i);
		i++;
	}
	*(str_temp + i) = '\0';
	return (str_temp); 
}	
