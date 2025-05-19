/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 00:10:05 by iorsini-          #+#    #+#             */
/*   Updated: 2025/03/04 12:22:58 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	teste1[] = "testando";
	printf("%s\n", ft_strupcase(teste1));
	char	teste2[] = "E aGora?";
	printf("%s\n", ft_strupcase(teste2));
	char	teste3[] = "tenho fe";
	printf("%s\n", ft_strupcase(teste3));

	return (0);
}
*/
