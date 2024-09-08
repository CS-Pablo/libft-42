/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:13:23 by csauron           #+#    #+#             */
/*   Updated: 2024/09/08 18:14:59 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
void	ft_print_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	ft_putchar('[');
	while (i < size)
	{
		if (i)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_putchar(']');
}

int	main(void)
{
	int tab[] = {8,5,7,3,4,9};
	ft_print_int_tab(tab, 6);
	ft_putchar('\n');
	ft_rev_int_tab(tab, 6);
	ft_print_int_tab(tab, 6);
	return (0);
}