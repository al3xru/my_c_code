/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 15:07:04 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/22 15:22:53 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return(-1);
	if (index == 0)
		return(0);
	if (index == 1)
		return(1);
	else
		return(ft_fibonacci(index - 1) + (ft_fibonacci(index - 2)));
	return(-1);
}
