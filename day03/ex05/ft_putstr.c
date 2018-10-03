/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 15:16:45 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/21 18:44:40 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchr(char c);

void	ft_putstr(char *str)
{
	int current;

	current = 0;
	while (str[current] != '\0')
	{
		ft_putchar(str[current]);
		current++;
	}
}
