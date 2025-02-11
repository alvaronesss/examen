/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:20:37 by aporras-          #+#    #+#             */
/*   Updated: 2025/01/27 17:55:48 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void rot_13(char *str)
{
	int i = 0;

	while(str[i] != '\0')	
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'm'))
		{
			str[i] += 13;
			write(1, &str[i], 1);
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] -= 13;
			write(1, &str[i], 1);
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
		rot_13(argv[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}