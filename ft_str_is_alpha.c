/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:40:37 by csauron           #+#    #+#             */
/*   Updated: 2024/09/08 18:40:51 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n",ft_str_is_alpha("test"));
	printf("%i\n",ft_str_is_alpha("test4"));
	printf("%i\n",ft_str_is_alpha("test_"));
}*/