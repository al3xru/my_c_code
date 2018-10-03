/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:12:16 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 16:14:25 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_putstr(char *str);

int		main(void)
{
	char src[] = "Hello !";
	char dest[] = "       "; 

	//ft_strncpy(dest, src, 8);
	//ft_putstr(dest);

	printf("%d", ft_strncmp("1ello", "hello", 2));
	printf("\n");

	printf("%d", strncmp("1ello", "hello", 2));
	printf("\n");
	return(0);
}
