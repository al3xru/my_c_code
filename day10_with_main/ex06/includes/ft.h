/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:42:09 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/02 20:33:47 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int a);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_error(int a, int b);
int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_mod(int a, int b);
int		ft_multiply(int a, int b);
int		ft_div(int a, int b);
int		(*g_func[6])(int, int) = {
	ft_error,
	ft_sum,
	ft_sub,
	ft_div, ft_multiply, ft_mod};

#endif
