/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:57:51 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/12 16:57:59 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{
        if(argc == 4)
        {
                if(argv[2][0] == '*')
                {
                        printf("%d", atoi(argv[1]) * atoi(argv[3]));

                }

                else if(argv[2][0] == '+')
                {
                        printf("%d", atoi(argv[1]) + atoi(argv[3]));

                }

                else if(argv[2][0] == '-')
                {
                        printf("%d", atoi(argv[1]) - atoi(argv[3]));

                }

                else if(argv[2][0] == '%')
                {
                        printf("%d", atoi(argv[1]) %  atoi(argv[3]));

                }

                else if(argv[2][0] == '/')
                {
                        printf("%d", atoi(argv[1]) / atoi(argv[3]));

                }

                
        }

        printf("\n");
}