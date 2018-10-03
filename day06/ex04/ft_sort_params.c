/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 16:00:27 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/26 20:50:26 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_param(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_sorted_argv(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		print_param(*&argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		ft_strcmp(char *str1, char *str2)
{
	char	*s1_buf;
	char	*s2_buf;

	s1_buf = str1;
	s2_buf = str2;
	while (*s1_buf == *s2_buf)
	{
		if (!*s1_buf)
			return (0);
		s1_buf++;
		s2_buf++;
	}
	return (*s1_buf - *s2_buf);
}

int		main(int argc, char **argv)
{
	int		counter;
	char	*temp;

	counter = 1;
	while (counter < argc)
	{
		if (counter + 1 < argc
				&& ft_strcmp(argv[counter + 1], argv[counter]) < 0)
		{
			temp = argv[counter + 1];
			argv[counter + 1] = argv[counter];
			argv[counter] = temp;
			counter = 0;
		}
		counter++;
	}
	print_sorted_argv(argc, argv);
	return (0);
}
