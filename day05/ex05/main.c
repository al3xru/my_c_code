/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:12:16 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/25 23:24:50 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
void	ft_putstr(char *str);

int		main(void)
{
	char src[] = "Hello !";
	char dest[] = "       "; 

	//ft_strncpy(dest, src, 8);
	//ft_putstr(dest);

	printf("%s", ft_strstr("abrakadabra", "kad"));
	printf("\n");

	printf("%s", strstr("abrakadabra", "kad"));
	printf("\n");
	return(0);
}
