/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 09:22:05 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/21 14:39:25 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[index] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*c;

	c = malloc(sizeof(*c) * (ft_strlen(src) + 1));
	if (c == 0)
	{
		return (0);
	}
	ft_strcpy(c, str);
	return (c);
}
