/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:50:25 by cdomet-d          #+#    #+#             */
/*   Updated: 2023/07/21 11:40:00 by cdomet-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_lowercase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	ft_lowercase(str);
	i = 0;
	flag = 1;
	while (str && str[i])
	{
		if ((flag == 1 && str[i] >= 'a' && str[i] <= 'z') || (
				str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] - 32;
		flag = 0;
		if ((str[i] >= 'a' && str[i] <= 'z') || (
				str[i] >= 'A' && str[i] <= 'Z'))
			flag = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
