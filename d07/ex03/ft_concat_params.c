/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:56:25 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/20 12:56:27 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int d;

	d = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = '\n';
	i++;
	while (src[d] != '\0')
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		j;
	int		total;

	if (argv[1] == 0)
	{
		return (0);
	}
	j = 1;
	while (j < argc)
	{
		total += ft_strlen(argv[j]);
		j++;
	}
	str = malloc(sizeof(char) * total);
	ft_strcpy(str, argv[1]);
	j = 2;
	while (j < argc)
	{
		ft_strcat(str, argv[j]);
		j++;
	}
	return (str);
}
