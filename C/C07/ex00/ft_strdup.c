/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:40:42 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/20 19:01:46 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src);

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;
	int		i;

	i = 0;
	len = ft_strlen(src);
	copy = malloc(sizeof(int) * len);
	if (!copy)
		return (0);
	while (i <= len)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src && src[i])
		i++;
	return (i);
}
