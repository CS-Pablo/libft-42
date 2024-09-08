/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:44:18 by csauron           #+#    #+#             */
/*   Updated: 2024/09/08 18:46:06 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"


int     ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i\n",ft_str_is_numeric("42"));
	printf("%i\n",ft_str_is_numeric("-42"));
	printf("%i\n",ft_str_is_numeric("42test"));
}
*/