/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 12:43:08 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/29 12:53:43 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char	*temp = "This is test string \t WOW ! I can";
	char	**temp2;
	int		i;
	int		j;	
	temp2 = ft_split_whitespaces(temp);
	for (i = 0; i < 5; i++)
	{
			printf("%s ", temp2[i]);
		
		printf("\n");
	}
	return (0);
}
