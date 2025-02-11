/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:01:21 by aporras-          #+#    #+#             */
/*   Updated: 2025/01/23 17:58:35 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ulstr(char *str)
{
	int i;
	
	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			write(1, &str[i], 1);
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			write(1, &str[i], 1);
			i++;
			
		}
		else
			{
				
				write(1, &str[i], 1);
				i++;
			}
		
	}	
	write (1, "\n", 1);


}

int main(int argc, char **argv)
{	
	if (argc == 2)
	{
		ulstr(argv[1]);
		
	}
	else
		write (1, "\n", 1);
	return (0);
}
