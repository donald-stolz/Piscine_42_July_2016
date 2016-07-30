/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 23:20:36 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/14 14:10:42 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_alphabet(void)
{
	char c;
	
	c = 'a';

	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');

}