/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:57:12 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/20 19:19:34 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int  ft_atoi(char *str);

int     main(void) 
{
	char	*str = "-3453Bugaga";
	
	printf("%d\n", ft_atoi(str));
    return 0;
}
