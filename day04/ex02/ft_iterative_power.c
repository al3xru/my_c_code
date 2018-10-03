/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 11:54:24 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/22 14:33:20 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;
	int 	step;

	if (power < 0)
		return(0);
	if (power == 0)
		return(1);
	step = 1;
	result = nb;
	while (step < power)
	{
		result = result * nb;
		step++;
	}
	return(result);
}
