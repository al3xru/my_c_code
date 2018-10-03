/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 20:36:56 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 20:42:06 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char	str[] = "asbdd[]fsdfDFDFdfdfdfsDFDf";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}
