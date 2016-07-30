/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:11:21 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/14 14:11:25 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_alphabet(void)
{
	char c;
	
	c = 'z';

	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');

}