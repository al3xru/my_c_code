/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 10:54:02 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/22 11:14:51 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb >= 13))
		return 0;
	if (nb == 0)
		return 1;
	return(nb * ft_recursive_factorial(nb - 1));
}
