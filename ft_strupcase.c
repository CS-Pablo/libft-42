/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sauron <sauron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:04:39 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 16:27:50 by sauron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char a[] = "test";
	char b[] = "Test";
	char c[] = "test42";
	printf("%s\n",ft_strupcase(a));
	printf("%s\n",ft_strupcase(b));
	printf("%s\n",ft_strupcase(c));
}
*/