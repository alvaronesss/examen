/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:49:16 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/11 11:50:10 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void inter(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	
	while (str1[i])
	{
		while(str2[j])
		{
			
			if(str1[i] == str2[j])
			{
				write(1, &str1[i], 1);
			}
			
			else if(str1[i] != str2[j])
					j++;
		}
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