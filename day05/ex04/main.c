/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:12:16 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 13:23:54 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_putstr(char *str);

int		main(void)
{
	char src[] = "Hello !";
	char dest[] = "       "; 

	ft_strncpy(dest, src, 8);
	ft_putstr(dest);
	printf("\n");
	printf("%s", strncpy(dest, src, 8));
	printf("\n");
	return(0);
}
