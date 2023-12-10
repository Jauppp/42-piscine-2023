/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:06:27 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/08 14:35:20 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(char col_1, char col_XX, char last_col, int lenght)
{
	int	i;

	i = 0;
	if (lenght <= 0)
		return ;
	ft_putchar(col_1);
	if (lenght == 1)
		return ;
	while (i < lenght - 2)
	{
		ft_putchar(col_XX);
		i++;
	}
	ft_putchar(last_col);
}	

void	rush(int x, int y)
{	
	int	i;

	if (y <= 0 || x <= 0)
		return ;
	ft_print_line('o', '-', 'o', x);
	ft_putchar('\n');
	if (y <= 1)
		return ;
	i = 0;
	while (i < y - 2)
	{
		ft_print_line('|', ' ', '|', x);
		ft_putchar('\n');
		i++;
	}	
	ft_print_line('o', '-', 'o', x);
}
