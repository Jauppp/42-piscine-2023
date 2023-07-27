/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:39:13 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/21 12:17:52 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strlen(char *str);
int		ft_is_base_valid(char *str, int len);

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			len;
	int			checkbase;

	len = ft_strlen(base);
	checkbase = ft_is_base_valid(base, len);
	n = (long)nbr;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (checkbase == 1)
		return ;
	if (n < len)
	{
		write(1, &base[n % len], 1);
	}
	else
	{
		ft_putnbr_base(n / len, base);
		write(1, &base[n % len], 1);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_is_base_valid(char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	if (len < 2)
		return (1);
	while (str && str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		j = i + 1;
		while (str && str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
