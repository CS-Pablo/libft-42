/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sauron <sauron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:59:29 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 16:26:27 by sauron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	a;

	a = nb ;
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	if (a > 9)
		ft_putnbr(a / 10);
	ft_putchar('0' + (a % 10));
}

int        main()
{
    ft_putnbr(0xffffffff);
    ft_putchar('\n');
    ft_putnbr(0x7fffffff);
    ft_putchar('\n');
    ft_putnbr(0x80000000);
    ft_putchar('\n');
}
