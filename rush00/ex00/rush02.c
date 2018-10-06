/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 15:39:12 by bnage             #+#    #+#             */
/*   Updated: 2018/09/23 16:11:25 by bnage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		l;
	int		s;

	l = 0;
	while (l < y)
	{
		s = 0;
		while (s < x)
		{
			if ((s > 0 && s < x - 1) || (l > 0 && l < y - 1))
			{
				if (s == 0 || l == 0 || s == x - 1 || l == y - 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			else
				(l == 0) ? ft_putchar('A') : ft_putchar('C');
			s++;
		}
		ft_putchar('\n');
		l++;
	}
}
