/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:39:10 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/18 19:58:22 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int     *ft_range(int start, int end)
{
	char * numeros = {1,2,3,4,5};
	int i = 0;

	while(numeros[i])
	{
		if (numeros[i] == '1')
		{
			start = numeros[i];
		}
		
		else if (numeros[i] == '5')
		{
			end = numeros[i];
		}
		i++;
	}
}
