/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:42:27 by aporras-          #+#    #+#             */
/*   Updated: 2025/01/25 20:38:58 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *str)
{
	char *alfabeto = "abcdefghijklmnopqrstuvwxyz";
	char *alfabeto2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	
	while(str[i])
	{
		int j = 0;
		int h = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			while(alfabeto[j] != str[i])
			{
				
				
				write(1, &str[i], 1);
				j++;
				
			}
			write (1, &str[i], 1);
		}
		else if((str[i] >= 'A' && str[i] <= 'Z'))
		{
			while(alfabeto2[h] != str[i])
			{
				write(1, &str[i], 1);
				h++;
			}
			write(1, &str[i], 1);
		}
		else
		{
			write(1, &str[i], 1);
				
		}
		i++;
	}
	write(1, "\n", 1);
	
	
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	else
		write(1, "\n", 1);
	return(0);
}
