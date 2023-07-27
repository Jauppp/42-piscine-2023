/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:45:27 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/18 18:23:28 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(to_find);
	i = 0;
	if (*to_find == 0)
		return (str);
	while (str && str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && str[i + j])
		{	
			j++;
		}
		if (j == len)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}
