/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 19:26:34 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/22 10:50:55 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	if (( nb < 0) || (nb > 12))
	{
		return (0);
	}
	result = nb;
	while (nb > 1)
	{
		result *= --nb;
	}
	return (result);
}
