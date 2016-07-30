/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 09:11:16 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/16 09:11:20 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index <= 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}
