/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:56:00 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/21 22:56:03 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sound_the_alarm(void)
{
	write(1, "ALERT!!!\n", 10);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	search_string(char *str)
{
	int i;

	i = ft_strcmp(str, "president");
	if (i == 0)
	{
		sound_the_alarm();
	}
	i = ft_strcmp(str, "attack");
	if (i == 0)
	{
		sound_the_alarm();
	}
	i = ft_strcmp(str, "powers");
	if (i == 0)
	{
		sound_the_alarm();
	}
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 64 && str[i] <= 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char	word[1000];
	int		i;
	int		q;
	int		c;

	i = 1;
	while (i < argc)
	{
		q = 0;
		c = 0;
		while (argv[i][q])
		{
			if (argv[i][q] != ' ')
			{
				word[c] = argv[i][q];
				c++;
			}
			q++;
		}
		word[q] = '\0';
		ft_strlowcase(word);
		search_string(word);
		i++;
	}
	return (0);
}
