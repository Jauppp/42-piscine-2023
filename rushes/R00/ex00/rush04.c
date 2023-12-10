/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcottet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:08:13 by lcottet           #+#    #+#             */
/*   Updated: 2023/07/08 11:58:51 by rperrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_line(char begin, char middle, char end, unsigned int length)
{
	unsigned int	i;

	i = 0;
	if (length == 0)
		return ;
	ft_putchar(begin);
	if (length == 1)
		return ;
	while (i < length - 2)
	{
		ft_putchar(middle);
		i++;
	}
	ft_putchar(end);
}

void	rush(unsigned int x, unsigned int y)
{
	unsigned int	i;

	if (y == 0)
		return ;
	print_line('A', 'B', 'C', x);
	ft_putchar('\n');
	if (y == 1)
		return ;
	i = 0;
	while (i < y - 2)
	{
		print_line('B', ' ', 'B', x);
		ft_putchar('\n');
		i++;
	}
	print_line('C', 'B', 'A', x);
	ft_putchar('\n');
}
