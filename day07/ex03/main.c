/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 17:12:47 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/27 14:45:16 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char 	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
		char 	*str;
		
		str = ft_concat_params(argc, argv);
		printf("%s", str);
		return (0);
}
