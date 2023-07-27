/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:22:05 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/25 13:58:31 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstring(char *str);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	if (argc <= 1)
		return (0);
	i = 0;
	while (++i < argc)
	{
		j = 1;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstring(argv[i]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstring(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
