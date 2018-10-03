/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 15:48:21 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/22 18:28:24 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		counter;
	int		result;

	result = 0;
	counter = 1;
	while (counter <= nb / 2)
	{
		result = counter * counter;
		if (result == nb)
			return (counter);
		counter++;
	}
	return (0);
}
