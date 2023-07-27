/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:11:06 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/22 08:09:49 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	guess;

	guess = 0;
	while (guess * guess < nb && guess <= 46340)
		guess++;
	if (guess * guess == nb)
		return (guess);
	else
		return (0);
}

int     main(void)
{
        #include <stdio.h>
        printf("%d", ft_sqrt(1));
}
