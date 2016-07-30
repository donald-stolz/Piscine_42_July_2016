/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 20:29:11 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/14 20:29:15 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_integer_table(int *tab, int size)
{
	char		c;
	int			var;
	int 		f;
	int 		j;
	int			i;
	int 		num[size];
	f = 0;
	while (f < size)
	{
		num[f] = tab[f];
		f++;
	}

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (num[i] > num[j])
			{
				var = num[i];
				num[i] = num[j];
				num[j] = var;
			}
		}
	}
	f = 0;
	while (f < size)
	{
		tab[f] = num[f];
		f++;
	}
}
