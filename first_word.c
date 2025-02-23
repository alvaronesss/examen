/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:02:09 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/20 14:20:50 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void palabras(char *str)
{
        int i = 0;

        while(str[i] == ' ' || str[i] == '\t')
        {
                i++;
        }
        while(str[i] && str[i] != ' ' && str[i] != '\t')
        {
                
                write(1, &str[i], 1);
                i++;
        }
        write(1, "\n", 1);
}

int main(int argc, char **argv)
{
        if(argc == 2)
        {
                palabras(argv[1]);
        }
        write(1, "\n", 1);
}
