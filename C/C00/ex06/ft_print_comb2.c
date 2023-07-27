/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:15:19 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/21 11:30:12 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putnbr(int nb);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = a + 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a < 10)
				write(1, "0", 1);
			ft_putnbr(a);
			write(1, " ", 1);
			if (b < 10)
				write(1, "0", 1);
			ft_putnbr(b);
			if (b != 99 || a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

void	ft_putnbr(int nb)
{
	long int	n;
	char		c;

	n = nb;
	c = '0' + n;
	if (n <= 9)
		write(1, &c, 1);
	else
	{
		ft_putnbr(n / 10);
		c = '0' + n % 10;
		write(1, &c, 1);
	}
}
