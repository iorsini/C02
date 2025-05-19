/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:33:47 by iorsini-          #+#    #+#             */
/*   Updated: 2025/03/04 12:22:07 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("Teste"));
	printf("%d\n", ft_str_is_printable("\n"));
	printf("%d\n", ft_str_is_printable("123456"));
	printf("%d\n", ft_str_is_printable("\t"));
}
*/
