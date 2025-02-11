/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:59:19 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/10 16:40:09 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void inter(char *str1, char *str2)
{
	char str3[256];
	int i = 0;
	int j = 0;
	int k = 0;
	
	while(str1[i])
	{
		while(str2[j])
		{
			if (str1[i] == str2[j])
			{
				str3[k] = str1[i];
				write(1, &str3[k], 1);
				k++;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}	
}