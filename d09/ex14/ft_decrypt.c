/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 11:01:50 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/22 11:01:52 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"

int	ft_str_is_alpha(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i] != '\0')
	{
		c = i;
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		if (c == i)
		{
			return (0);
		}
	}
	return (1);
}

int		split(char *str, char *arr, int i)
{
	static int	j;

	while (ft_str_is_alpha(str[i]))
	{
		arr[j] = str[i];
		i++;
		j++;
		if (ft_str_is_alpha(str[i]) == 0)
		{
			arr[j] = ';';
			j++;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		arr[j] = str[i]
		i++;
		j++;
		if (str[i] <= '0' || str[i] >= '9')
		{
			arr[j] = '|';
			j++;
			i++;
		}
	}
	return (j);
}

t_perso **ft_decrypt(char *str)
{
	int i;
	int	c;
	char *arr;

	i = 0;
	arr = (char*)malloc(sizeof(char) * (strlen(str) + 1));
	while(str[i])
	{
		c = split(str, arr, i)
	}
	arr[c + 1] = 0;
	return (arr);
}
