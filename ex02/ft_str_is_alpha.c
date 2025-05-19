/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:04:03 by iorsini-          #+#    #+#             */
/*   Updated: 2025/03/04 12:17:14 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_upper;
	int	is_lower;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		is_lower = (str[i] >= 'a' && str[i] <= 'z');
		if (!(is_upper || is_lower))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("Teste123"));
	printf("%d\n", ft_str_is_alpha("Finalmente"));
	printf("%d\n", ft_str_is_alpha("hsaiygr!!"));
	return (0);
}
*/
