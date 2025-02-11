/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:22:45 by aporras-          #+#    #+#             */
/*   Updated: 2025/01/28 19:50:54 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	
	while(str[i])
		i++;
	return (i);
}
int main()
{
	char st[] = "yiiiijaaaa";
	printf("%d", ft_strlen(st));
	return (0);
}