/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:58:22 by aporras-          #+#    #+#             */
/*   Updated: 2025/01/25 17:21:49 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *strcpy(char *dest, const char *src)
{
	int i;
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		write(1, &dest[i], 1);
		i++;
	}
	dest[i] = '\0';
	
	return(dest);
}

int main()
{
	char de[] = "";
	const char sr[] = "adios";
	
	strcpy(de, sr);
}