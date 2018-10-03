/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 19:29:29 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/22 19:40:41 by ccumming         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int j;

	if (ft_is_prime(nb))
		return (nb);
	else
	{
		j = nb;
		while (ft_is_prime(nb) != 1)
			nb++;
		return nb;
	}
	return 0;
}
