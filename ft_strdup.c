/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:15:20 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/17 14:50:41 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *str;

	while(src[i])
	{
		i++;
	}
	str = malloc((i + 1) * sizeof(char));
	i = 0;
	
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	return(str);
}

int main(int argc , char **argv)
{
	if (argc == 2)
	{
		printf( "la frase:	%s\n", ft_strdup(argv[1]));
	}
}
