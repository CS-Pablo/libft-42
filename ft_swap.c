/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:44:01 by csauron           #+#    #+#             */
/*   Updated: 2024/09/08 17:47:08 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 0;
	b = 42;
	printf("a: %i\nb: %i\n", a, b);
	ft_swap(&a, &b);
	printf("a: %i\nb: %i\n", a, b);
}
*/