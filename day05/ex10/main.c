/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 19:57:16 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 20:10:55 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quersfdsf-dedus; cindgdfsdfdsfsd+et+dg+un";
	printf("%s\n", str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}
