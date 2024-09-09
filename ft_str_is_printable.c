/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sauron <sauron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:02:09 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 16:25:15 by sauron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(32 <= str[i] && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*

int	main(void)
{
	printf("%i\n",ft_str_is_printable("test"));
	printf("%i\n",ft_str_is_printable("hi"));
	printf("%i\n",ft_str_is_printable("TEST\n"));
}
*/