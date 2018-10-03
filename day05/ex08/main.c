/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:12:16 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 16:32:12 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char		*ft_strupcase(char *str);
void	ft_putstr(char *str);

int		main(void)
{
	char src[] = "hello WAY 000___! dawn !";
	char dest[] = "       "; 

	//ft_strncpy(dest, src, 8);
	//ft_putstr(dest);

	printf("%s", ft_strupcase(src));
	printf("\n");

//	printf("%d", strupcase("1ello"));
	printf("\n");
	return(0);
}
