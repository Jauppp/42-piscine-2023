/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:31:30 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/26 15:47:33 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_strlen(char *str);
char	*strnpy(char **src, char *dest, char *sepi, int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		str_len;
	int		sep_len;

	str = NULL;
	i = -1;
	str_len = 0;
	if (size <= 0)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	while (++i < size)
		str_len = str_len + ft_strlen(strs[i]); 
	sep_len = ft_strlen(sep) * (size); 
	str_len = str_len + sep_len;
	str = malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (str);
	str[str_len] = '\0';
	strnpy(strs, str, sep, size);
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*strnpy(char **src, char *dest, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -1;
	k = 0;
	l = 0;
	while (++i < size)
	{
		j = 0;
		while (src[i][j])
			dest[k++] = src[i][j++];
		if (i == size - 1)
		{
			dest[k] = '\0';
			return (dest);
		}
		while (sep[l])
			dest[k++] = sep[l++];
		l = 0;
	}
	return (dest);
}
