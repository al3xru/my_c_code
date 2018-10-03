/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 18:46:07 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/22 18:55:14 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int counter;

	counter = 2;
	if (nb > 1)
	{
		while (counter * counter <= nb)
		{
			if (nb % counter == 0)
				return (0);
			counter++;
		}
		return (1);
	}
	return (0);
}
