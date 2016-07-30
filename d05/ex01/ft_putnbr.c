/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 09:31:20 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/18 09:31:23 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	num[10];
	int	i;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
	{
		ft_putchar('0');
	}
	while (nb > 0)
	{
		num[i] = nb % 10;
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(num[i] + 48);
	}
	ft_putchar('\n');
}
