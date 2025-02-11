/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:52:38 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/09 15:45:47 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void que(char *str1, char *str2, char *str3)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while(str1[i])
	{
		if(str1[i] == str2[j])
		{
			str1[i] = str3[k];
			write(1, &str1[i], 1);
			i++;
		}
		
		else if (str1[i] != str2[j])
		{
			write(1, &str1[i], 1);
			i++;
		}
		
			
	}
	write(1, "\n", 1);
}
int main(int argc, char **argv)
{
	
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return(0);
	}
	
	if(argc == 4)
	{
		que(argv[1], argv[2], argv[3]);
	}

	else
	{
		write(1, "\n", 1);
	}
}