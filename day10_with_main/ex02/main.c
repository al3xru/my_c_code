/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:42:10 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/01 14:18:19 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_map(int *tab, int length, int (*f)(int));

void	ft_putchar(int c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int		abs(int a)
{
	if (a < 0)
		return a * -1;
	else
		return a;
	return (0);
}

int		main(void)
{
	int *new;
	int numbers[] = {1,2,3,4,5,6,-7,0};
	int i;


	new = ft_map(numbers, 7, abs);
	for (i = 0; i < 7; i++)
		printf("%d\n", new[i]);
	return (0);
}
