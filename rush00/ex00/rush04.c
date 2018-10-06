/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:07:05 by bnage             #+#    #+#             */
/*   Updated: 2018/09/23 16:08:05 by bnage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		l;
	int		s;
	char	c;

	l = 0;
	while (l < y)
	{
		s = 0;
		while (s < x)
		{
			c = (s == l) || (s != 0 && l != 0) ? 'y' : 'n';
			if ((s > 0 && s < x - 1) || (l > 0 && l < y - 1))
			{
				if (s == 0 || l == 0 || s == x - 1 || l == y - 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			else
				(c == 'y') ? ft_putchar('A') : ft_putchar('C');
			s++;
		}
		ft_putchar('\n');
		l++;
	}
}
