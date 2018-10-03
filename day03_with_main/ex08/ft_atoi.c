/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:16:34 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/20 19:17:29 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		number;
	int		is_negative;

	is_negative = 1;
	if(*str == '-')
	{
		is_negative = -1;
		str++;
	}

	number = 0;
	while(*str >= '0' && *str <= '9')
		number = number * 10 + (*str++ - '0');
	return number * is_negative;
}
