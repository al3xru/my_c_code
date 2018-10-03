/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 15:32:08 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/26 12:43:25 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		counter;

	counter = 1;
	while (counter < argc)
	{
		while (*argv[counter])
		{
			ft_putchar(*argv[counter]);
			argv[counter]++;
		}
		ft_putchar('\n');
		counter++;
	}
	return (0);
}
