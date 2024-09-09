/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sauron <sauron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:10:31 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 16:24:58 by sauron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str = ft_strlowcase(str);
	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z')
			&& (!(('A' <= str[i - 1] && str[i - 1] <= 'Z')
					|| ('a' <= str[i - 1] && str[i - 1] <= 'z')
					|| ('0' <= str[i - 1] && str[i - 1] <= '9'))))
					str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux";
	ft_putstr(ft_strcapitalize(test));
	return (0);
}
*/