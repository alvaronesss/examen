/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:02:00 by aporras-          #+#    #+#             */
/*   Updated: 2025/01/27 20:48:23 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void alpha_mirror(char *str)
{
	char *alfabeto = "abcdefghijklmnopqrstuvwxyz";
	char *alfabeto2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			write (1, &alfabeto['z' - str[i]], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write (1, &alfabeto2['Z' - str[i]], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	else
		write(1, "\n", 1);
	return(0);
}