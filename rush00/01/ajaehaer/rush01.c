/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 20:48:11 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/21 22:21:50 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_stars(int a) 
{
	int countStars;

	countStars = 1;
	while (countStars <= a)
	{
		if (countStars == 1) 
			ft_putchar('*');
		if (countStars == a)
		{
			ft_putchar('*');
			ft_putchar('\n');
		}
		if ((countStars != 1) && (countStars != a))
			ft_putchar (' ');
		countStars++;
	}

}

void	print_lines(int a, char c) 
{
	int countSym;
	char last;
	
	last = '/';
	if (c == '/')
		last = '\\';
	countSym = 1;
	while (countSym <= a)
	{
		if (countSym == 1)
			ft_putchar(c);
		if (countSym == a) 
		{
			ft_putchar(last);
			ft_putchar('\n');
		}
		if ((countSym != 1) && (countSym != a))
			ft_putchar('*');
		countSym++;
	}
}

void	rush(int a, int b)
{
	int lines;

	lines = 1;
	while (lines <= b)
	{
		if ((lines == 1) && (lines != b))
			print_lines(a, '/');
		if ((lines != 1) && (lines != b))
			print_stars(a);
		if (lines == b)
			print_lines(a, '\\');
		lines++;
	}
	ft_putchar('\n');
}
