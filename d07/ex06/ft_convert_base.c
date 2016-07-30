/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 09:29:24 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/21 09:29:27 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		num;
	int		sign;
	char	p;

	num = 0;
	p = 0;
	while ((str[p] <= '0') && (str[p] >= '9'))
	{
		p++;
	}
	if (str[p - 1] == '-')
	{
		sign = -1;
	}
	while ((str[p] >= '0') && (str[p] <= '9'))
	{
		num = num * 10 + (str[p] - '0');
		p++;
	}
	if (sign == -1)
	{
		return (-num);
	}
	return (num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;
	int	fr;
	int	to;
	int i;

	nb = ft_atoi(&nbr);
	fr = ft_atoi(&base_from);
	to = ft_atoi(&base_to);
	i = 0;
	if (fr = to)
	{
		return (&nbr);
	}
}
