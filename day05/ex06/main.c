/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:12:16 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/25 23:28:30 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

int		main(void)
{
	char src[] = "Hello !";
	char dest[] = "       "; 

	//ft_strncpy(dest, src, 8);
	//ft_putstr(dest);

	printf("%d", ft_strcmp("llo", "ello"));
	printf("\n");

	printf("%d", strcmp("llo", "ello"));
	printf("\n");
	return(0);
}
