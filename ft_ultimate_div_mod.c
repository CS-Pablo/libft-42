/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:52:49 by csauron           #+#    #+#             */
/*   Updated: 2024/09/08 18:45:27 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 12;
	printf("a=%i\nb=%i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a/b=%i\na%%b=%i\n", a, b);
	return (0);
}
*/