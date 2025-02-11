/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:46:44 by aporras-          #+#    #+#             */
/*   Updated: 2024/09/19 16:44:59 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void	charro(char c)
{
	write(1, &c, 1);
}*/
void	rotone(char *str)
{
	int i = 0;


	while (str[--i] != '\0')
	{
		if (str[i] >= 'a' && str[i] < 'z' || str[i] >= 'A' && str[i] < 'Z')
			charro(str[i] + 1);
		else if (str[i] == 'z' || str[i] == 'Z')
			charro(str[i] - 25);
		i++;
	}

}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
	}
	charro('\n');

}
