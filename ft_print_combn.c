/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:59:02 by csauron           #+#    #+#             */
/*   Updated: 2024/09/08 17:24:23 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void    ft_print(char *tab, char c)
{
    write(1, tab,  c - '0');
}
void    ft_combn(int n, char c,char *tab)
{

    int i;
	i = c - '0';
    tab[i] = c;

   if(n == 0)
        {
            ft_print(tab, c);
            ft_putchar(',');    
            ft_putchar(' ');

            return ;
        }
        
    i = 0; 
       
    while(i < n)
    {
            ft_combn(n - 1, c + 1,tab); 
    i++;
    }
}

void	ft_print_combn(int  n)
{
    char tab[9];

    ft_combn(n, '0',tab);

}

int     main(int ac, char **av)
{
    if (ac < 2)
        return(0);
    ft_print_combn(atoi(av[1]));
}
