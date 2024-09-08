/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:13:17 by csauron           #+#    #+#             */
/*   Updated: 2024/09/08 17:13:20 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"


void    ft_prnt_rslt(char x, char y, char z)
{
    if (!(x == '0' && y == '1' && z == '2'))
            write(1, ", ", 2);
        write(1, &x, 1);
        write(1, &y, 1);
        write(1, &z, 1);
}

void    ft_print_comb()
{
    char a;
    char b;
    char c;

    a = '0';

    while(a++ <= '7')
    {
            b = a;
            while(b++ <= '8')
            {
                c = b;
                while(c++ <= '9')
                {
                    ft_prnt_rslt(a - 1, b - 1, c - 1);

                }
            }
    }
}

int     main()
{
    ft_print_comb();
}
