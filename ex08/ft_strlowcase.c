/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:49:46 by iorsini-          #+#    #+#             */
/*   Updated: 2025/03/04 12:24:00 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			(str [i] = str [i] + 32);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	teste1[] = "TESTE";
	char	teste2[] = "de noVo";
	char	teste3[] = "vai dar CERTO!";
	
	printf("%s\n", ft_strlowcase(teste1));
	printf("%s\n", ft_strlowcase(teste2));
	printf("%s\n", ft_strlowcase(teste3));
}
*/
