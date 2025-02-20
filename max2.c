/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:13:24 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/17 19:08:19 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int max(int* tab, unsigned int len)
{
	int i = 0;
	int max = tab[i];

	while(i < len)
	{
		if(max < tab[i])
		{
			max = tab[i];
		}
		i++;
	}
	return(max);
}

