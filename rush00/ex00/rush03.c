/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaehaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 21:44:29 by ajaehaer          #+#    #+#             */
/*   Updated: 2018/09/22 03:59:27 by ajaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if (i != y && i != 1 && j != x && j != 1)
				ft_putchar(' ');
			else if (j == 1)
				i == 1 || i == y ? ft_putchar('A') : ft_putchar('B');
			else if (j == x)
				i == 1 || i == y ? ft_putchar('C') : ft_putchar('B');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
	}
}
