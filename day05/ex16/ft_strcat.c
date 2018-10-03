/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 09:48:11 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/25 10:24:44 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strcat(char *dest, char *src)
{
	int		size_dest;
	int		size_src;
	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	
	while (src[size_src]!= '\0')
	{
		dest[size_dest+size_src] = src[size_src];
		size_src++;
	}
	dest[size_dest + size_src] = '\0';
	return (dest);
}
