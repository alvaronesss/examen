/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:50:24 by aporras-          #+#    #+#             */
/*   Updated: 2024/09/18 13:26:26 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft(int *argc)
{
	*argc = 42;
	printf("argc: %d\n",*argc);
}

int main (int argc, char **argv)
{
	printf("hola mundo \n");
	printf("argc: %p\n",&argc);
	printf("argv %s\n", argv[1]);

	ft(&argc);

	printf("argc: %d\n",argc);
}

