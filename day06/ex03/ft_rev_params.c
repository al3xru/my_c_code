/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 15:53:45 by ccumming          #+#    #+#             */
/*   Updated: 2018/09/25 15:57:22 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		counter;

	counter = argc - 1;
	while (counter != 0)
	{
		while (*argv[counter])
		{
			ft_putchar(*argv[counter]);
			argv[counter]++;
		}
		ft_putchar('\n');
		counter--;
	}
	return (0);
}
