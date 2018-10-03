/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:41:01 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/02 20:30:41 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "includes/ft.h"

int		ft_get_operation(char *str)
{
	if (ft_strlen(str) > 1)
		return (0);
	if (str[0] == '+')
		return (1);
	else if (str[0] == '-')
		return (2);
	else if (str[0] == '/')
		return (3);
	else if (str[0] == '*')
		return (4);
	else if (str[0] == '%')
		return (5);
	return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	int		operation;

	if (argc == 4)
	{
		operation = ft_get_operation(argv[2]);
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if (operation == 3 && b == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		if (operation == 5 && b == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		ft_putnbr(g_func[operation](a, b));
		ft_putchar('\n');
	}
	return (0);
}
