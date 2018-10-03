/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 14:08:59 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/27 15:41:45 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		length;
	char	*result;

	i = 0;
	length = 0;
	while (++i < argc)
	{
		length += ft_strlen(*(argv + i)) + 1;
	}
	result = (char *)malloc(sizeof(char) * length);
	if (result)
	{
		i = -1;
		while (++i < length)
		{
			result[i] = argv[1][i];
			if (argv[1][i] == '\0')
				result[i] = '\n';
		}
		result[i - 1] = '\0';
	}
	else
		return (NULL);
	return (result);
}
