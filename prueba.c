/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:50:24 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/19 23:27:02 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				write(1, &s1[i], 1); // Corrige el uso de write
				return ((char *)&s1[i]); // Devuelve la dirección del primer carácter encontrado
			}
			j++;
		}
		i++;
	}
	return (NULL); // Devuelve NULL si no hay coincidencias
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		ft_strpbrk(argv[1], argv[2]);
	}
}