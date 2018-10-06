/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaehaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 03:49:16 by ajaehaer          #+#    #+#             */
/*   Updated: 2018/09/22 03:49:25 by ajaehaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int l;
	int s;

	l = 0;
	while (l < y)
	{
		s = 0;
		while (s < x)
		{
			if (l == 0 || l == y - 1)
			{
				s == 0 || s == x - 1 ? ft_putchar('o') : ft_putchar('-');
			}
			else
			{
				s == 0 || s == x - 1 ? ft_putchar('|') : ft_putchar(' ');
			}
			s++;
		}
		ft_putchar('\n');
		l++;
	}
}
