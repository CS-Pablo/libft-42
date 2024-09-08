/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:08:35 by csauron           #+#    #+#             */
/*   Updated: 2024/09/08 19:09:39 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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
}*/