/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sauron <sauron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:48:53 by csauron           #+#    #+#             */
/*   Updated: 2024/09/09 16:25:06 by sauron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*


int	main(void)
{
	printf("%i\n",ft_str_is_uppercase("test"));
	printf("%i\n",ft_str_is_uppercase("Test"));
	printf("%i\n",ft_str_is_uppercase("TEST"));
}
*/