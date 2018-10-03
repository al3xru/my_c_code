/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 19:13:18 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/24 20:14:52 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

int		is_small_capital(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_numeric_alphabetical(char c)
{
	if ((c >= '0' && c <= '9') || is_small_capital(c) || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	lowercase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_numeric_alphabetical(str[i]) && is_small_capital(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		if (is_small_capital(str[0]))
			str[0] = str[0] - 32;
		i++;
	}
	return (str);
}
