/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 11:14:20 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/25 11:40:17 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strncat(char *dest, char *src, int nb)
{
	int		size_dest;
	int		size_src;
	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	
	while (src[size_src]!= '\0' && size_src <= nb)
	{
		dest[size_dest+size_src] = src[size_src];
		size_src++;
	}
	dest[size_dest + size_src] = '\0';
	return (dest);
}
