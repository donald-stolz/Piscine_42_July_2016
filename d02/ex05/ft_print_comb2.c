/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:12:55 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/14 14:12:59 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_print_comb2(void)
{
  char n[2];
  char c;
  char dig1 = '0';
  char dig2 = '0';
  char dig3 = '0';
  char dig4 = '1';

  while (dig1 < '9')
  {
    while (dig2 <= '9')
    {
      while (dig3 <= '9')
      {
        while (dig4 <= '9')
        {
          ft_putchar(dig1);
          ft_putchar(dig2);
          ft_putchar(' ');
          ft_putchar(dig3);
          ft_putchar(dig4);
          ft_putchar(',');
          ft_putchar(' ');

          dig4++;
        }
        
        dig4 = '0';
        dig3++;
      }
      dig2++;
      dig3 = '0';
      dig4 = dig2 +1;
    }


    dig1++;
    dig2 = '0';
   }

  if (dig1 == '9')
  {
    while (dig2 <= '8')
    {
      while (dig3 <= '9')
      {
        while (dig4 < '9')
        {
          ft_putchar(dig1);
          ft_putchar(dig2);
          ft_putchar(' ');
          ft_putchar(dig3);
          ft_putchar(dig4);
          ft_putchar(',');
          ft_putchar(' ');

          dig4++;
        }
        
        if (dig4 == '9')
        {
          ft_putchar(dig1);
          ft_putchar(dig2);
          ft_putchar(' ');
          ft_putchar(dig3);
          ft_putchar(dig4);
        }
        
        dig4 = '0';
        dig3++;
      }
      dig2++;
      dig3 = '0';
      dig4 = dig2 +1;
    }
  }

  return;
}