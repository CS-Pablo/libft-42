/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sauron <sauron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:23:49 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 16:21:42 by sauron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_result(int i, int j)
{
	ft_putchar('0' + (i / 10));
	ft_putchar('0' + (i % 10));
	ft_putchar(' ');
	ft_putchar('0' + (j / 10));
	ft_putchar('0' + (j % 10));
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i++ <= 98)
	{
		j = i;
		while (j++ <= 99)
		{
			if (!(i == 1 && j == 2))
				write(1, ", ", 2);
			ft_print_result(i - 1, j - 1);
		}
	}
}

int     main()
{
    ft_print_comb2();
}