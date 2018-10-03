/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:12:16 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 12:17:40 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);

int		main(void)
{
	char src[]= "Test me now!";
	char dest[] = ""; 

	ft_strcpy(dest, src);
	ft_putstr(dest);
	printf("\n");
	//printf("%s", strcpy(dest, src));
	printf("\n");
	return(0);
}
