/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 20:55:09 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/25 20:55:12 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
int	find_num(char nb);
int	ft_calc(int nb1, int nb2, char* opr);
void	print_num(int num);

int main(int argc, char *argv[])
{
	int	num1;
	int	num2;
	int sum;

	num1 = 0;
	num2 = 0;
	sum = 0;
	if (argc < 3)
	{
		return (0);
	}
	num1 = find_num(*argv[1]);
	num2 = find_num(*argv[3]);
	sum = ft_calc(num1, num2, argv[2]);
	print_num(sum);
	return (0);
}
