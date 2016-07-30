/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 11:10:51 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/20 11:10:53 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	argc = 0;
	i = 0;
	while (argv[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j > 0)
	{
		ft_putstr(argv[j]);
		j--;
	}
}
