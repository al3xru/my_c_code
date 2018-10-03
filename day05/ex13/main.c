/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:36:56 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 20:57:11 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char	str[] = "asbddfdsfsdfsdfsdf";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
