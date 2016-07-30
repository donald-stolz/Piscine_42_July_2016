/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 10:16:27 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/22 10:16:29 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	arrlen(char **tab)
{
	int x;

	x = 0;
	while (tab[x])
	{
		x++;
	}
	return (x);
}

int	ft_compact(char **tab, int length)
{
	int	i;
	int	q;
	int	j;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == 0)
		{
			q = 0;
			while (tab[i + q + 1])
			{
				j = 0;
				while (tab[i + q + 1][j])
				{
					tab[i + q][j] = tab[i + q + 1][j];
					j++;
				}
				q++;
			}
		}
		i++;
	}
	return (arrlen(tab));
}
