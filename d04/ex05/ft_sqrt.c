/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 13:39:05 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/16 13:39:16 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_square_root(int nb, int i)
{
	if (i * i == nb)
	{
		return (i);
	}
	if (i * i > nb)
	{
		return (0);
	}
	else
	{
		return (ft_square_root(nb, i + 1));
	}
}

int		ft_sqrt(int nb)
{
	int i;

	i = ft_square_root(nb, 1);
	return (i);
}
