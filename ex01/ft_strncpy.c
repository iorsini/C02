/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:21:48 by iorsini-          #+#    #+#             */
/*   Updated: 2025/03/04 12:15:51 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main() 
{
    char	src[] = "testing";
    char	dest[5] = "";
	
	printf("Destino anterior: %s\n", dest);
    printf("String copiada: %s\n", src);
	ft_strncpy(dest, src, 4);
    printf("Destino após funcao: %s\n", dest);
    return 0;
}
*/
