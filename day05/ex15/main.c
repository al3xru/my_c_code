/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:36:56 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 21:10:02 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char	str[] = "";

	printf("%d", ft_str_is_printable(str));
	return (0);
}
