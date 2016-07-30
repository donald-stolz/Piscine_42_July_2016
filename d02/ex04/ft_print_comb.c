/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 08:32:25 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/14 14:12:26 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c);

void ft_print_comb(void)
{
	char n[3];
	char c;
	
	char dig1 = '0';
	char dig2 = '1';
	char dig3 = '2';
	int	i=0;
	
	while (dig1 <= '7')
	{
		while (dig2 <= '8')
		{
			while (dig3 <= '9')
				{
      				n[0] = dig1;
       				n[1] = dig2;
       				n[2] = dig3;
          			
           			while (i < 3 )
           			{
           				c = n[i];
           				ft_putchar(c);
           				i++;
           			}
            		i = 0;
            		ft_putchar(',');
            		ft_putchar(' ');
    			
    			dig3++;

    			}

    		dig2++;
    		dig3 = dig2 + 1;
    	}
    	dig1++;
    	dig2 = dig1 + 1;
    	dig3 = dig2 + 1;

	}
    ft_putchar('\n');
    return;
}