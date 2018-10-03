/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:12:16 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/25 09:23:56 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nb);

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = -42;
	
	printf("%d\n", INT_MIN);
	ft_putnbr(INT_MIN);
	//ft_putnbr(b);
	return (0);
}
