/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 17:12:47 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/27 20:45:14 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **str);

int		main(void)
{
		char 	*str;
		char	**str2;
		
		str = "test words \t any words";		
		
		for (str2 = ft_split_whitespaces("any other world ..."); *str2 != 0; str2++)
			printf("'%s',", *str2);
		printf("\n");
		ft_print_words_tables(ft_split_whitespaces("any other world ..."));

		return (0);
}
