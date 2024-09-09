/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sauron <sauron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:08:35 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 16:26:46 by sauron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char a[] = "Test";
	char b[] = "TEST";
	char c[] = "TEST42";
    
	printf("%s\n",ft_strlowcase(a));
	printf("%s\n",ft_strlowcase(b));
	printf("%s\n",ft_strlowcase(c));
}
*/