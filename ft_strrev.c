/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:51:25 by aporras-          #+#    #+#             */
/*   Updated: 2025/01/28 18:13:06 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char    *ft_strrev(char *str)
{
	int i;

	i = 0;
	
	while (str[i])
	{
		i++;
		
	}
	i--;

	while (str[i])
		{
			write(1, &str[i], 1);
			i--;
		}
		return(str);
	
}
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_strrev(argv[1]);
	}
	return(0);
}