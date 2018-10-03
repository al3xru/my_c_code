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

int     ft_count_if(char **tab, int (*f)(char*));

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

int		is_z(char *str)
{
    while(*str != '\0')
	    {
            if (*str == 'z')
		        return 1;
	        str++;
        }
	return (0);
}

int		main(void)
{
	int *new;
	char *chars[] = {
        "zzz",
        "zzzzzzz",
		"zzzz", 0
    };
	int i;
    printf("%d", ft_count_if(chars, &is_z));
	return (0);
}
