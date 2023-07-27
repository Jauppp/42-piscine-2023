/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:00:03 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/19 17:03:02 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	r;

	fact = 1;
	r = nb;
	if (r < 0)
		return (0);
	if (r == 0)
		return (1);
	while (fact < nb)
	{
		r = r * fact;
		fact++;
	}
	return (r);
}
